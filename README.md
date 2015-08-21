# vasp_makefiles
Re-worked makefiles for VASP 5.3. Modernized some stuff to GNU Make to avoid exsting kludges.

NOTE: No warranty express or implied is given. This worked in one particular environment, it may not work in another.
      
With the above caveat in mind:
* these are compilation files for VASP 5.3 to be compiled with Intel Composer XE 2015 + MKL 11.2
* I was not able to get hybrid MPI + OpenMP to work. So, it's MPI-only, or OpenMP-only.
