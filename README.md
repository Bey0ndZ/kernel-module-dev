Learning kernel development (for device drivers)

    Module development does not use the STL for C
    Common libraries: linux/init.h and linux/module.h
    Make file containing a path to headers for the current kernel for which we are developing must be there (present in /usr/src/
    insmod is used to insert a developed module into the kernel
    dmesg is used to see the message obtained from the modules in kernel
    rmmod is used to remove the module inserted into the kernel
    module_init(methodname) is used to initialize the module in our C code
    module_exit(methodname) is used to exit (recover the allocated H/w resources)

