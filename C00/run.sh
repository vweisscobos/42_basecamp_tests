files=(
	"ex00/ft_putchar.c"
)

curr_path=$(realpath $0 | sed "s/\/run.sh$//")
echo "Testing project C01"
echo
file=$("$1/ex00/ft_putchar.c")
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