       !Fortran second in-Class Lab: Takes in a value 'a', and then
       !check if that value is divisible by 3, in which case you print
       !out 'Fizz', and then check if 'a' is divisible by 5, and if so
       !print 'Buzz' 
       !Kartik Nagpal - Kn8767
       
       program FizzBuzz

       implicit none

       integer :: a, f, b

       print *, 'a = '
       read *, a

       f = a/3;
       b = a/5;

       if(a - 3*f == 0) then
           print *, "Fizz"
       end if
       if(a - 5*b == 0) then
           print *, "Buzz"
       end if

       end program FizzBuzz
