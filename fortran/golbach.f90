       !Fortran Project: Create examples for the Golbach Conjecture
       !Kn8767 - Kartik Nagpal

       program project
       implicit none              


       
       call golbach(3, 10000)


       contains
           logical function prime_test_function(num)
               integer, intent(in) :: num
               integer :: i, j
               logical :: p
                
               i = num
               p = .TRUE.
               do j = 2, (i - 1)
                   if(mod(i, j) == 0) then
                       p = .FALSE.
                       exit
                   end if
               end do
               prime_test_function = p;
           end function
           
           subroutine generatePrimes(num, start, arr)
               integer, intent(in) :: num, start
               integer :: i, s
               integer,dimension(num) :: primes
               integer,dimension(num), intent(inout) :: arr
               
               i = start
               s = 1
               do while(s <= num)
                   if(prime_test_function(i)) then
                       primes(s) = i
                       s = s+1
                   end if
                   i = i+1
               end do
               arr = primes
           end subroutine

           subroutine printPrimes(num, start)
               integer, intent(in) :: num, start
               integer, dimension(num) :: primes
               call generatePrimes(num, start, primes)
               print *, primes
           end subroutine

           subroutine golbach(start, num)
               integer, intent(in) :: start, num
               integer :: i, numPrimes=0, r, k=0
               integer, dimension(1) :: j
               integer, dimension(920) :: dist
                              
               i = start
               do
                   if(numPrimes >= num) then
                       exit;
                   end if
                   if(prime_test_function(i)) then
                       call generatePrimes(1, i+2, j)
                       r = i - (j(1) - i)
                       if(prime_test_function(r)) then
                           dist(k) = j(1) - i
                           print '(4(a, i8, 10x))',&
                           "P=", i, "Q=", j(1), "R=", r, "dist=", dist(k)
                           dist(k) = j(1) - i
                           k = k + 1
                       end if
                       numPrimes = numPrimes + 1

                   end if
                   i = i + (j(1)-i) 
               end do

           end subroutine
       end program project
