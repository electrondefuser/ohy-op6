#include "linux/kernel.h"
#include "linux/init.h"
#include "linux/module.h"

static int  __init lkm_init(void) {
    printk(KERN_ALERT "Hello, World (LKM TESTING)!!");
    return 0;
}

static void  __exit lkm_exit(void) {
    printk(KERN_ALERT "Goodbye, World (LKM TESTING)!!");
}

module_init(lkm_init);
module_exit(lkm_exit);

MODULE_DESCRIPTION("Loadable Kernel Module (LKM) testing for devices");
MODULE_AUTHOR("electrondefuser<vineetnr1@gmail.com>");
MODULE_LICENSE("GPL");
MODULE_VERSION("0.1");