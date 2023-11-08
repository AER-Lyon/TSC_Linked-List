DIFF=$(diff -u $1 $2)

if [ $? -eq 0 ]; then
    printf "\033[0;32mPASSED\033[0m\n"
else
    printf "\033[0;31mFAILED\033[0m\n"
fi
