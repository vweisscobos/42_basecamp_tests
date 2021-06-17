files=(
	"ex00/ft_iterative_factorial.c"
	"ex01/ft_recursive_factorial.c"  
	"ex02/ft_iterative_power.c"        
	"ex03/ft_recursive_power.c"  
	"ex04/ft_fibonacci.c"
	"ex05/ft_sqrt.c"         
	"ex06/ft_is_prime.c"
	"ex07/ft_find_next_prime.c"
)

curr_path=$(realpath $0 | sed "s/\/run.sh$//")
echo "Testing project C04"
echo
for f in ${files[@]}
do 
	file=$1/$f
	ex=$(grep -oE "ex[[:digit:]]{2}" <<< "$file")
	echo "Checking $ex..."
	echo "Running Norminette..." 
	norminette -R CheckForbiddenSourceHeader $file
	echo "Compiling $file..."
	gcc -Wall -Wextra -Werror -lbsd $file "$curr_path/$ex.c" -o "$curr_path/a.out"
	echo "Tests result:"
	$curr_path/a.out
	echo
	echo
done
echo "Checking for extra files..."
find $1 -type f -not -wholename "*git*" | while read line; do
	unset ok
	ok=false
	for f in ${files[@]}
	do
		if [[ $line =~ $f ]]
		then
			ok=true
		fi
	done
	if [ $ok == false ];
	then
		echo "$line shouldnt be here"
	fi
done
echo "Checking for forbidden libs and functions..."
git grep -E --files-with-matches 'printf|stdio.h'
echo "Checking for uncomitted changes..."
git status
echo "Checking for commited changes that were not pushed..."
git log --oneline