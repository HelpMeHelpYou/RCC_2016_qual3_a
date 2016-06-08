test : ans1 ans2
	diff -sZ myans1.a ./tests/01.a &
	diff -sZ myans2.a ./tests/02.a 

out : files_11_55_16116_231_9.cpp
	g++ -std=c++11 files_11_55_16116_231_9.cpp -o out

ans1 : out
	cat ./tests/01 | ./out > myans1.a

ans2 : out
	cat ./tests/02 | ./out > myans2.a


