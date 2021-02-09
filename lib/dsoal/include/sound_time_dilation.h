#ifndef SOUND_TIME_DILATION_H
#define SOUND_TIME_DILATION_H


#ifndef DECLSPEC_EXPORT
#ifdef _WIN32
#define DECLSPEC_EXPORT __declspec(dllexport)
#else
#define DECLSPEC_EXPORT
#endif
#endif

DECLSPEC_EXPORT float setSoundPitchForTimeDilation(float pitchDilation);

#endif /* SOUND_TIME_DILATION_H */