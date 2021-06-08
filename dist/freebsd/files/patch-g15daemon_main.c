--- g15daemon/main.c.orig	2021-05-27 20:47:45 UTC
+++ g15daemon/main.c
@@ -484,7 +484,7 @@ int main (int argc, char *argv[])
 #endif
 #endif                      
         
-        uf_conf_open(lcdlist, "/etc/g15daemon.conf");
+        uf_conf_open(lcdlist, "/usr/local/etc/g15daemon.conf");
         global_cfg=g15daemon_cfg_load_section(lcdlist,"Global");
         if(!cycle_cmdline_override){
             cycle_key = 1==g15daemon_cfg_read_bool(global_cfg,"Use MR as Cycle Key",0)?G15_KEY_MR:G15_KEY_L1;
@@ -572,7 +572,7 @@ exitnow:
     setegid(0);
     closelog();
     g15daemon_quit_refresh();
-    uf_conf_write(lcdlist,"/etc/g15daemon.conf");
+    uf_conf_write(lcdlist,"/usr/local/etc/g15daemon.conf");
     uf_conf_free(lcdlist);
     unlink("/var/run/g15daemon.pid");
     }
