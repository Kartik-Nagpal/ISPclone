       !HW #7: create a subroutine that generate a number 
       !of primes starting at a given value.
       !Kn8767 - Kartik Nagpal

       program genPrimes
       implicit none              


       
       call printPrimes(1000, 2)



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
       end program genPrimes
