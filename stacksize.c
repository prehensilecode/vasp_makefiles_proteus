#include <sys/time.h> 
#include <sys/resource.h> 
#include <stdio.h> 

/* NOTE there is an underscore at the end of the function name */
void stacksize_() 
{ 
    int res; 
    struct rlimit rlim; 
  
    getrlimit(RLIMIT_STACK, &rlim); 
    printf("Before: cur=%d,hard=%d\n",(int)rlim.rlim_cur,(int)rlim.rlim_max); 
    
    rlim.rlim_cur=RLIM_INFINITY; 
    rlim.rlim_max=RLIM_INFINITY; 
    res=setrlimit(RLIMIT_STACK, &rlim); 
   
    getrlimit(RLIMIT_STACK, &rlim); 
    printf("After: res=%d,cur=%d,hard=%d\n",res,(int)rlim.rlim_cur,(int)rlim.rlim_max); 
}

