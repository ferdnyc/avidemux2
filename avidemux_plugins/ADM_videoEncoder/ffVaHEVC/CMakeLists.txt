INCLUDE(ve_plugin)
INCLUDE(admCheckLibVA)
checkLibVA()
INCLUDE_DIRECTORIES(${ADM_HEADER_DIR}/ADM_coreLibVAEnc)
SET(ffVaEncHEVC_SRCS
    ffVAEncHEVC_plugin.cpp
    ADM_ffVAEncHEVC.cpp
)
ADD_VIDEO_ENCODER(ADM_ve_ffVaEncHEVC ${ffVaEncHEVC_SRCS})

INIT_VIDEO_ENCODER(ADM_ve_ffVaEncHEVC)
INSTALL_VIDEO_ENCODER(ADM_ve_ffVaEncHEVC)
TARGET_LINK_LIBRARIES(ADM_ve_ffVaEncHEVC ADM_libavcodec ADM_libavutil ADM_coreLibVAEnc6 ADM_coreLibVA6)
