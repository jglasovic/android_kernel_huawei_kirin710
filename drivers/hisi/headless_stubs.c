#include <linux/module.h>
#include <linux/types.h>

/*
 * Stubs for symbols referenced by precompiled objects or unconditional
 * call sites.  Each group is compiled only when the real subsystem is
 * disabled, so there is never a duplicate definition.
 */

#ifndef CONFIG_HIFI_MAILBOX
/* sound/core/pcm_native.c and pcm_lib.c */
void snd_pcm_reset_pre_time(void) {}
EXPORT_SYMBOL(snd_pcm_reset_pre_time);
void snd_pcm_print_timeout(void) {}
EXPORT_SYMBOL(snd_pcm_print_timeout);

/* sound/usb/card.c */
int usbaudio_ctrl_controller_switch(void *p1, unsigned int p2, unsigned int p3) { return 0; }
EXPORT_SYMBOL(usbaudio_ctrl_controller_switch);
void usbaudio_ctrl_set_chip(void *p) {}
EXPORT_SYMBOL(usbaudio_ctrl_set_chip);
void usbaudio_ctrl_disconnect(void) {}
EXPORT_SYMBOL(usbaudio_ctrl_disconnect);
void usbaudio_ctrl_wake_up(void *p) {}
EXPORT_SYMBOL(usbaudio_ctrl_wake_up);

/* dwc3-hisi.c */
int usbaudio_nv_is_ready(void) { return 1; }
EXPORT_SYMBOL(usbaudio_nv_is_ready);
#endif

#ifndef CONFIG_INPUTHUB_20
/* lcdkit_disp.c */
void save_light_to_sensorhub(unsigned int p1, unsigned int p2) {}
EXPORT_SYMBOL(save_light_to_sensorhub);
#endif

#ifndef CONFIG_HISI_POWERKEY_SPMI
/* block/hisi-blk-flush.S */
struct notifier_block;
int hisi_powerkey_register_notifier(struct notifier_block *nb) { return 0; }
EXPORT_SYMBOL(hisi_powerkey_register_notifier);
int hisi_powerkey_unregister_notifier(struct notifier_block *nb) { return 0; }
EXPORT_SYMBOL(hisi_powerkey_unregister_notifier);
#endif

#ifndef CONFIG_HW_ZEROHUNG
/* block/hisi-blk-latency.S */
void iowp_workqueue_init(void) {}
EXPORT_SYMBOL(iowp_workqueue_init);
void iowp_report(int pid, int tgid, char *name) {}
EXPORT_SYMBOL(iowp_report);
#endif
