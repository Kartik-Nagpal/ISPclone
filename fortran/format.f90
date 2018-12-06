       program format
       
       implicit none
       integer :: i
       integer, dimension(5) :: A = (/ 1, 2, 3, 4, 5/)
       do i=1,5
              print '(i4)', A(i)
       end do
       end program format
