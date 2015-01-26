#include<linux/init.h>
#include<linux/module.h>

static int hello_init(void) {
	printk("Welcome to kernel programming");
	return 0;
}

static void hello_exit(void) {
	printk("Hope for the best. Hope I stick with this programming");
}

module_init(hello_init);
module_exit(hello_exit);
