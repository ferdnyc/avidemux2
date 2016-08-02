# eclipse
SET(CMAKE_VERBOSE_MAKEFILE ON)
IF(CMAKE_COMPILER_IS_GNUCC)
  SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fmessage-length=0")
ENDIF(CMAKE_COMPILER_IS_GNUCC)
IF(CMAKE_COMPILER_IS_GNUCXX)
  SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fmessage-length=0")
ENDIF(CMAKE_COMPILER_IS_GNUCXX)
#
IF(AVIDEMUX_THIS_IS_CORE)
        SET(ADM_INCLUDE_PREFIX ${CMAKE_SOURCE_DIR}/)
        SET(ADM_INCLUDE_POSTFIX include/)
        INCLUDE_DIRECTORIES(${CMAKE_BINARY_DIR}/config)
ELSE(AVIDEMUX_THIS_IS_CORE)
        SET(ADM_INCLUDE_PREFIX ${ADM_HEADER_DIR})
        SET(ADM_INCLUDE_POSTFIX /)
        INCLUDE_DIRECTORIES(${ADM_INCLUDE_PREFIX}/)
ENDIF(AVIDEMUX_THIS_IS_CORE)

MACRO(ADD_CORE_INCLUDE iname)
        INCLUDE_DIRECTORIES(${ADM_INCLUDE_PREFIX}/${iname}/${ADM_INCLUDE_POSTFIX})
ENDMACRO(ADD_CORE_INCLUDE name)


ADD_CORE_INCLUDE(ADM_core)
ADD_CORE_INCLUDE(ADM_coreAudioFilter)
ADD_CORE_INCLUDE(ADM_coreAudioParser)
ADD_CORE_INCLUDE(ADM_coreAudio)
ADD_CORE_INCLUDE(ADM_coreAudioDevice)
ADD_CORE_INCLUDE(ADM_coreAudioEncoder)
ADD_CORE_INCLUDE(ADM_coreDemuxer)

if (UNIX )
	include_directories(${ADM_INCLUDE_PREFIX}/ADM_coreDemuxer/${ADM_INCLUDE_POSTFIX}/unix)
endif (UNIX )

ADD_CORE_INCLUDE(ADM_coreDemuxerMpeg)
ADD_CORE_INCLUDE(ADM_coreImage)
ADD_CORE_INCLUDE(ADM_coreMuxer)
ADD_CORE_INCLUDE(ADM_coreScript)
ADD_CORE_INCLUDE(ADM_coreUI)
ADD_CORE_INCLUDE(ADM_coreUtils)
ADD_CORE_INCLUDE(ADM_coreVideoEncoder)
ADD_CORE_INCLUDE(ADM_coreVideoFilter)
ADD_CORE_INCLUDE(ADM_coreVideoCodec)
ADD_CORE_INCLUDE(ADM_coreImageLoader)
ADD_CORE_INCLUDE(ADM_coreJobs)
ADD_CORE_INCLUDE(ADM_coreSocket)

