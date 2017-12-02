# vasp_makefiles
UPDATE 2017-12-02 
* makefile.vasp53.mpiseq.proteus does not produce a correct executable
* Use makefile.linux\_ifc\_proteus instead -- it is based on makefile.linux\_ifc\_P4 from the VASP distribution

Re-worked makefiles for VASP 5.3. Modernized some stuff to GNU Make to avoid existing kludges.

NOTE: No warranty express or implied is given. This worked in one particular environment, it may not work in another.
      
With the above caveat in mind:
* these are compilation files for VASP 5.3 to be compiled with Intel Composer XE 2015 + MKL 11.2
* I was not able to get hybrid MPI + OpenMP to work. So, it's MPI-only, or OpenMP-only.
