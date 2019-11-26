QT -= gui

TEMPLATE = lib
DEFINES += FFMPEGCPP_LIBRARY

CONFIG += c++11

D:\dev\github.com\blackears\ffmpeg-cpp\source\ffmpeg-cpp\ffmpeg-cpp
D:\dev\github.com\blackears\ffmpeg-cpp\ffmpeg

INCLUDEPATH +=../../../ffmpeg/include

win32 {
    contains(QT_ARCH, i386) {
        message("32-bit")

        LIBS += -L$$PWD/../../../ffmpeg/win32/bin
        LIBS += -lavcodec-58 -lavfilter-7 -lavformat-58 -lavutil-56 -lswscale-5 -lswresample-3

    } else {
        message("64-bit")

        LIBS += -L$$PWD/../../../ffmpeg/win64/bin
        LIBS += -lavcodec-58 -lavfilter-7 -lavformat-58 -lavutil-56 -lswscale-5 -lswresample-3
    }
}

macx {
    #MacOs specific stuff
    LIBS += -L$$PWD/../../../ffmpeg/macos/bin
    LIBS += -lavcodec.58 -lavfilter.7 -lavformat.58 -lavutil.56 -lswscale.5 -lswresample.3
}

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    AudioFormatConverter.cpp \
    CodecDeducer.cpp \
    Codecs/AudioCodec.cpp \
    Codecs/Codec.cpp \
    Codecs/H264NVEncCodec.cpp \
    Codecs/H265NVEncCodec.cpp \
    Codecs/JPGCodec.cpp \
    Codecs/PNGCodec.cpp \
    Codecs/VP9Codec.cpp \
    Codecs/VideoCodec.cpp \
    Demuxing/AudioInputStream.cpp \
    Demuxing/InputStream.cpp \
    Demuxing/StreamData.cpp \
    Demuxing/VideoInputStream.cpp \
    FFmpegException.cpp \
    "Frame Sinks/AudioEncoder.cpp" \
    "Frame Sinks/AudioFilter.cpp" \
    "Frame Sinks/Filter.cpp" \
    "Frame Sinks/FrameSinkStream.cpp" \
    "Frame Sinks/OneInputFrameSink.cpp" \
    "Frame Sinks/VideoEncoder.cpp" \
    "Frame Sinks/VideoFilterInput.cpp" \
    FrameContainer.cpp \
    Muxing/AudioOutputStream.cpp \
    Muxing/Muxer.cpp \
    Muxing/OutputStream.cpp \
    Muxing/VideoOutputStream.cpp \
    OpenCodec.cpp \
    Sources/Demuxer.cpp \
    Sources/EncodedFileSource.cpp \
    Sources/RawAudioDataSource.cpp \
    Sources/RawAudioFileSource.cpp \
    Sources/RawVideoDataSource.cpp \
    Sources/RawVideoFileSource.cpp \
    VideoFormatConverter.cpp \
    ffmpeg_cppqt.cpp \

HEADERS += \
    ffmpeg-cpp_global.h \
    AudioFormatConverter.h \
    CodecDeducer.h \
    Codecs/AudioCodec.h \
    Codecs/Codec.h \
    Codecs/H264NVEncCodec.h \
    Codecs/H265NVEncCodec.h \
    Codecs/JPGCodec.h \
    Codecs/PNGCodec.h \
    Codecs/VP9Codec.h \
    Codecs/VideoCodec.h \
    ConvertedAudioProcessor.h \
    Demuxing/AudioInputStream.h \
    Demuxing/InputStream.h \
    Demuxing/StreamData.h \
    Demuxing/VideoInputStream.h \
    FFmpegException.h \
    "Frame Sinks/AudioEncoder.h" \
    "Frame Sinks/AudioFilter.h" \
    "Frame Sinks/AudioFrameSink.h" \
    "Frame Sinks/Filter.h" \
    "Frame Sinks/FrameSink.h" \
    "Frame Sinks/FrameSinkStream.h" \
    "Frame Sinks/FrameWriter.h" \
    "Frame Sinks/OneInputFrameSink.h" \
    "Frame Sinks/VideoEncoder.h" \
    "Frame Sinks/VideoFilterInput.h" \
    "Frame Sinks/VideoFrameSink.h" \
    FrameContainer.h \
    Info/AudioStreamInfo.h \
    Info/ContainerInfo.h \
    Info/VideoStreamInfo.h \
    Muxing/AudioOutputStream.h \
    Muxing/Muxer.h \
    Muxing/OutputStream.h \
    Muxing/VideoOutputStream.h \
    OpenCodec.h \
    Sources/Demuxer.h \
    Sources/EncodedFileSource.h \
    Sources/InputSource.h \
    Sources/RawAudioDataSource.h \
    Sources/RawAudioFileSource.h \
    Sources/RawVideoDataSource.h \
    Sources/RawVideoFileSource.h \
    VideoFormatConverter.h \
    ffmpeg.h \
    ffmpegcpp.h \
    std.h \
    ffmpeg_cppqt.h

# Default rules for deployment.
unix {
    target.path = /usr/lib
}
!isEmpty(target.path): INSTALLS += target
