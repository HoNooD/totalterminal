#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    vHistorical = 0, // this position is important for comparing, we try to treat all prior to 10.6.8 as historical
    v273_1 = 100, // 10.6.8
    v297,         // 10.7 (Lion GM)
    v299,         // 10.7.2 update
    v303,         // 10.7.3 update
    v304,         // 10.8 (Mountain Lion Preview 1)
    vUnknown,     // this position is important for comparing, we assume unknown are future Terminal versions
    vMaxSupportedTerminalVersion
} TSupportedTerminalVersions;

#define FIRST_LION_VERSION v297

extern TSupportedTerminalVersions initializeTerminalVersion();
extern TSupportedTerminalVersions terminalVersion();

#ifdef __cplusplus
} // extern "C"
#endif
