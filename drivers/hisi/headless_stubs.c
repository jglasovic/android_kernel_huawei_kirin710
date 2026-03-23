#include <linux/module.h>
#include <linux/types.h>

/* sound/core/pcm_native.c and pcm_lib.c call these unconditionally;
   implementations lived in hisi_pcm_hifi.c (disabled with HIFI_MAILBOX) */
void snd_pcm_reset_pre_time(void) {}
EXPORT_SYMBOL(snd_pcm_reset_pre_time);
void snd_pcm_print_timeout(void) {}
EXPORT_SYMBOL(snd_pcm_print_timeout);

/* sound/usb/card.c calls these unconditionally;
   implementations lived in sound/usb/hifi/ (disabled with HIFI_MAILBOX) */
int usbaudio_ctrl_controller_switch(void *p1, unsigned int p2, unsigned int p3) { return 0; }
EXPORT_SYMBOL(usbaudio_ctrl_controller_switch);
void usbaudio_ctrl_set_chip(void *p) {}
EXPORT_SYMBOL(usbaudio_ctrl_set_chip);
void usbaudio_ctrl_disconnect(void) {}
EXPORT_SYMBOL(usbaudio_ctrl_disconnect);
void usbaudio_ctrl_wake_up(void *p) {}
EXPORT_SYMBOL(usbaudio_ctrl_wake_up);

/* dwc3-hisi.c calls this when CONFIG_SND is enabled;
   implementation lived in sound/usb/hifi/ */
int usbaudio_nv_is_ready(void) { return 1; }
EXPORT_SYMBOL(usbaudio_nv_is_ready);

/* lcdkit_disp.c calls this unconditionally;
   implementation lived in inputhub/kirin710/sensor_feima.c (CONFIG_INPUTHUB_20) */
void save_light_to_sensorhub(unsigned int p1, unsigned int p2) {}
EXPORT_SYMBOL(save_light_to_sensorhub);

/* block/hisi-blk-flush.S calls this from precompiled assembly;
   implementation lived in hisi_powerkey_spmi.c (CONFIG_HISI_POWERKEY_SPMI) */
struct notifier_block;
int hisi_powerkey_register_notifier(struct notifier_block *nb) { return 0; }
EXPORT_SYMBOL(hisi_powerkey_register_notifier);
int hisi_powerkey_unregister_notifier(struct notifier_block *nb) { return 0; }
EXPORT_SYMBOL(hisi_powerkey_unregister_notifier);

/* block/hisi-blk-latency.S calls these from precompiled assembly;
   implementation lived in hwzerohung/watchpoint/zrhung_wp_io.c */
void iowp_workqueue_init(void) {}
EXPORT_SYMBOL(iowp_workqueue_init);
void iowp_report(int pid, int tgid, char *name) {}
EXPORT_SYMBOL(iowp_report);
