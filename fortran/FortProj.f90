       program fortProg

       implicit none
       

       print *, "13 isPrime: ", prime_test_function(13)








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

       end program fortProg
