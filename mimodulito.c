#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/utsname.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Code Genesis");
MODULE_DESCRIPTION("Punto 9 TP 4");
MODULE_VERSION("1.0");

static int __init mimodulo_init(void) {
    struct new_utsname *uts = init_utsname();
    printk(KERN_INFO "Mimodulo cargado en el kernel. Hostname: %s\n", uts->nodename);
    return 0;
}

static void __exit mimodulo_exit(void) {
    printk(KERN_INFO "Mimodulo descargado del kernel.\n");
}

module_init(mimodulo_init);
module_exit(mimodulo_exit);
