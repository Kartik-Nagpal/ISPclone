       program allocArr
       implicit none

       real, dimension(:), allocatable :: x1
       real, dimension(:,:), allocatable :: x2
       integer :: n, m, ierror

        n = 100
        m = 10

       allocate(x1(n), stat=ierror)
       if(ierror /= 0) then
           stop 'error x1'
       end if


       allocate(x2(n,m), stat=ierror)
       if(ierror /= 0) then
           stop 'error x2'
       end if

       x1 = 5
       print *, x1



       deallocate(x1)
       deallocate(x2)


       end program allocArr
