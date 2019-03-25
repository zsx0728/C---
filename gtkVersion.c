#include <gtk/gtk.h>
//gcc gtk.c -o gtk `pkg-config --libs --cflags gtk+-2.0`
int main(int argc, char *argv[]) {

    gtk_init(&argc, &argv);

    g_printf("GTK+ version: %d.%d.%d\n", gtk_major_version, 
        gtk_minor_version, gtk_micro_version);
    g_printf("Glib version: %d.%d.%d\n", glib_major_version,
        glib_minor_version, glib_micro_version);    
        
    return 0;
}
