# A Shell Script to Check and Print everything before testing...
echo "Welcome in nboisde shell script to check Repository Faster.\n"
echo "Starting Process"
sleep 1
find .
norminette -R CheckForbiddenSourceHeader ./ex*/*.c
sleep 2
echo "executing the compilation"
sleep 0.5
gcc -Wall -Werror -Wextra -c ./*.c
find .*.o
sleep 1
cat ./*.c
#find ./ex*/*.c > tmp.c
#awk '{print "#include \""$0"\""}' tmp.c >> tmp.c
#cat tmp.c | grep "^#" > main.c
#echo "\nint main(void)\n{\n}" >> main.c
#echo "main.c for tests -------------------\n"
#cat main.c
#rm tmp.c
rm ./*.o
ls -la
gcc -Wall -Werror -Wextra -o rush00 main.c ft_putchar.c rush00.c
gcc -Wall -Werror -Wextra -o rush01 main.c ft_putchar.c rush01.c
gcc -Wall -Werror -Wextra -o rush02 main.c ft_putchar.c rush02.c
gcc -Wall -Werror -Wextra -o rush03 main.c ft_putchar.c rush03.c
