`/* Implementation of the NEAREST intrinsic
   Copyright (C) 2003-2014 Free Software Foundation, Inc.
   Contributed by Richard Henderson <rth@redhat.com>.

This file is part of the GNU Fortran 95 runtime library (libgfortran).

Libgfortran is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public
License as published by the Free Software Foundation; either
version 3 of the License, or (at your option) any later version.

Libgfortran is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

#include "libgfortran.h"'

include(`mtype.m4')dnl

mathfunc_macro

`#if defined (HAVE_'real_type`) && 'hasmathfunc(copysign) && hasmathfunc(nextafter)`

extern 'real_type` nearest_r'kind` ('real_type` s, 'real_type` dir);
export_proto(nearest_r'kind`);

'real_type`
nearest_r'kind` ('real_type` s, 'real_type` dir)
{
  dir = MATHFUNC(copysign) (MATHFUNC(__builtin_inf) (), dir);
  if (FLT_EVAL_METHOD != 0)
    {
      /* ??? Work around glibc bug on x86.  */
      volatile 'real_type` r = MATHFUNC(nextafter) (s, dir);
      return r;
    }
  else
    return MATHFUNC(nextafter) (s, dir);
}

#endif'
