files=(
	"ex00/ft_ft.c"
	"ex01/ft_ultimate_ft.c"
	"ex02/ft_swap.c"
	"ex03/ft_div_mod.c"
	"ex04/ft_ultimate_div_mod.c"
	"ex05/ft_putstr.c"
	"ex06/ft_strlen.c"
	"ex07/ft_rev_int_tab.c"
	"ex08/ft_sort_int_tab.c"
)

curr_path=$(realpath $0 | sed "s/\/run.sh$//")
echo "Testing project C01"
echo
for f in ${files[@]}
do 
	file=$1/$f
	ex=$(grep -oE "ex[[:digit:]]{2}" <<< "$file")
	echo "Checking $ex..."
	echo "Running Norminette..." 
	norminette -R CheckForbiddenSourceHeader $file
	echo "Compiling $file..."
	gcc -Wall -Wextra -Werror $file "$curr_path/$ex.c" -o "$curr_path/a.out"
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