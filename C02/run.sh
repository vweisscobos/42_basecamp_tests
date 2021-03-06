files=(
	"ex00/ft_strcpy.c"
	"ex01/ft_strncpy.c"
	"ex02/ft_str_is_alpha.c"
	"ex03/ft_str_is_numeric.c"
	"ex04/ft_str_is_lowercase.c"
	"ex05/ft_str_is_uppercase.c"
	"ex06/ft_str_is_printable.c"
	"ex07/ft_strupcase.c"
	"ex08/ft_strlowcase.c"
	"ex09/ft_strcapitalize.c"
	"ex10/ft_strlcpy.c"
	"ex11/ft_putstr_non_printable.c"
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