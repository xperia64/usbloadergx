#ifndef GAMEPATCHES_H_
#define GAMEPATCHES_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <gccore.h>

void RegisterDOL(u8 *dst, int len);
void ClearDOLList();
void gamepatches(u8 videoSelected, u8 videoPatchDol, u8 aspectForce, u8 languageChoice, u8 patchcountrystring,
                 u8 vipatch, u8 deflicker, u8 sneekVideoPatch, u8 hooktype, u64 returnTo, u8 privateServer, const char *serverAddr);
void anti_002_fix(u8 *addr, u32 len);
void deflicker_patch(u8 *addr, u32 len);
void patch_vfilters(u8 *addr, u32 len, u8 *vfilter);
void patch_vfilters_rouge(u8 *addr, u32 len, u8 *vfilter);
void PrivateServerPatcher(void *addr, u32 len, u8 privateServer, const char *serverAddr);
void PatchFix480p();
s8 do_new_wiimmfi();
s8 do_new_wiimmfi_nonMKWii(void *addr, u32 len);
void domainpatcher(void *addr, u32 len, const char *domain);
bool NSMBPatch();
bool PoPPatch();
void VideoModePatcher(u8 *dst, int len, u8 videoSelected, u8 VideoPatchDol);
void sneek_video_patch(void *addr, u32 len);
bool PatchReturnTo(void *Address, int Size, u32 id);
int PatchNewReturnTo(int es_fd, u64 title);
int BlockIOSReload(int es_fd, u8 gameIOS);
void PatchAspectRatio(void *addr, u32 len, u8 aspect);

#ifdef __cplusplus
}
#endif

#endif
