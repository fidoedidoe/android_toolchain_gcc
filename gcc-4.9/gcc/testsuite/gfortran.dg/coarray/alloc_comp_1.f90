! { dg-do run }
!
! Allocatable scalar corrays were mishandled (ICE)
!
type t
  integer, allocatable :: caf[:]
end type t
type(t) :: a
allocate (a%caf[3:*])
a%caf = 7
!print *, a%caf
if (a%caf /= 7) call abort ()
if (any (lcobound (a%caf) /= [ 3 ]) &
    .or. ucobound (a%caf, dim=1) /= this_image ()+2)  &
  call abort ()
end
