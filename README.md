All files are "norminette OK!". It was not the case with the first commit regarding some files. But all files uploaded now are norminette happy && paco/francinette strict happy.

Advices:
watch out => printf is type int => you have to return the number of characters written
It exists many ways to do it. Do whatever you want but I suggest to:
1.0) git clone 1.2) Create Makefile & Header 1.3) Make sure that your the %c formatter is perfectly working with your inputs (main), then with paco/francinette, and finally with paco -s. Only when these 3 formers steps are good, you can work with %s.
2.0) Then do the same with %s, 
3.0) with %d (and with %i)
4.0) with %x, %X and %p

you can do as well %% before %c
Understand well the notion of variadic function and how to use it 
