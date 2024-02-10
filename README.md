All files are "norminette OK!". It was not the case with the first commit regarding some files. But all files uploaded now are norminette happy && paco/francinette strict happy.<br>
<br>
Advices:<br>
watch out => printf is type int => you have to return the number of characters written.<br>
It exists many ways to do it. Do whatever you want but I suggest to:<br>
0.0) Test the printf multiples times with each formatter => this is the fundamentals. <br>
1.0) git clone 1.2) Create Makefile & Header 1.3) Make sure that your the %c formatter is perfectly working with your inputs (main), then with paco/francinette, and finally with paco -s. Only when these 3 formers steps are good, you can work with %s.<br>
2.0) Then do the same with %s, <br>
3.0) with %d (and with %i)<br>
4.0) with %x, %X and %p<br>
<br>
you can do as well %% before %c<br>
Understand well the notion of variadic function and how to use it <br>
<br>
Advices to succeed this project:<br>
0) Before starting writing the function, I will suggest you to create a lot of main. And make the most easy to understand well what the functions is doing.
1) Know how to count well => if you think your counter is correct, think twice, until being sure.<br>
2) protect your writes<br>
3) protect the recursive function that you call<br>
4) watch out the type of your functions => be sure that the type is correct. Moreover, be sure that the same type of your parameter is not changing when you use it for other fonctions.<br>
