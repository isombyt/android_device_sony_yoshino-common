#include <input/Input.h>
#include <gui/SurfaceComposerClient.h>
#include <media/AudioTrack.h>
#include <SkImageInfo.h>


namespace android {
    extern "C" {
        // lib64/libwfdnative.so
        void _ZN7android11MotionEvent10initializeEiiiiiiiiiNS_20MotionClassificationEffffllmPKNS_17PointerPropertiesEPKNS_13PointerCoordsE(
                MotionEvent* event,
                int32_t deviceId,
                int32_t source,
                int32_t displayId,
                int32_t action,
                int32_t actionButton,
                int32_t flags,
                int32_t edgeFlags,
                int32_t metaState,
                int32_t buttonState,
                MotionClassification classification,
                float xOffset,
                float yOffset,
                float xPrecision,
                float yPrecision,
                nsecs_t downTime,
                nsecs_t eventTime,
                size_t pointerCount,
                const PointerProperties* pointerProperties,
                const PointerCoords* pointerCoords
            ) {
            event->initialize(
                event->nextId(), deviceId, source, displayId, INVALID_HMAC, action, actionButton, flags, edgeFlags, metaState, buttonState,
                classification, 1.0, 1.0, xOffset, yOffset, xPrecision, yPrecision, xOffset, yOffset,
                downTime, eventTime, pointerCount, pointerProperties, pointerCoords);

        }

        // lib64/libwfdnative.so
        void _ZN7android8KeyEvent10initializeEiiiiiiiiill(
                KeyEvent* event,
                int32_t deviceId,
                int32_t source,
                int32_t displayId,
                int32_t action,
                int32_t flags,
                int32_t keyCode,
                int32_t scanCode,
                int32_t metaState,
                int32_t repeatCount,
                nsecs_t downTime,
                nsecs_t eventTime
            ) {
            event->initialize(
                event->nextId(), deviceId, source, displayId, INVALID_HMAC, action, flags, keyCode,
                scanCode, metaState, repeatCount, downTime, eventTime);
        }

        // libwfdmmsrc.so
        void _ZN7android11AudioSystem16setErrorCallbackEPFviE() {}
        void _ZN7android21SurfaceComposerClient11Transaction20setDisplayProjectionERKNS_2spINS_7IBinderEEEjRKNS_4RectES9_(
                SurfaceComposerClient::Transaction* transaction,
                const sp<IBinder>& token,
                uint32_t orientation,
                const Rect& layerStackRect,
                const Rect& displayRect
            ) {
            return transaction->setDisplayProjection(token, static_cast<ui::Rotation>(orientation), layerStackRect, displayRect);
        }

        // libwfdmmsink.so
        // libwfdcommonutils.so
        int _ZNK11SkImageInfo13bytesPerPixelEv(SkImageInfo* info) {
            return info->bytesPerPixel();
        }
    }

    // libwfdmmsink.so
    AudioTrack* _ZN7android10AudioTrackC1E19audio_stream_type_tj14audio_format_tjj20audio_output_flags_tPFviPvS4_ES4_i15audio_session_tNS0_13transfer_typeEPK20audio_offload_info_tjiPK18audio_attributes_tbfi(audio_stream_type_t streamType, uint32_t sampleRate, audio_format_t format, audio_channel_mask_t channelMask, const sp<IMemory>& sharedBuffer, audio_output_flags_t flags, AudioTrack::callback_t cbf, void* user, int32_t notificationFrames, audio_session_t sessionId, AudioTrack::transfer_type transferType, const audio_offload_info_t *offloadInfo, uid_t uid, pid_t pid, const audio_attributes_t* pAttributes, bool doNotReconnect, float maxRequiredSpeed) asm("_ZN7android10AudioTrackC1E19audio_stream_type_tj14audio_format_tjj20audio_output_flags_tPFviPvS4_ES4_i15audio_session_tNS0_13transfer_typeEPK20audio_offload_info_tjiPK18audio_attributes_tbfi");
    AudioTrack* _ZN7android10AudioTrackC1E19audio_stream_type_tj14audio_format_tjj20audio_output_flags_tPFviPvS4_ES4_i15audio_session_tNS0_13transfer_typeEPK20audio_offload_info_tjiPK18audio_attributes_tbfi(
            audio_stream_type_t streamType,
            uint32_t sampleRate,
            audio_format_t format,
            audio_channel_mask_t channelMask,
            const sp<IMemory>& sharedBuffer,
            audio_output_flags_t flags,
            AudioTrack::callback_t cbf,
            void* user,
            int32_t notificationFrames,
            audio_session_t sessionId,
            AudioTrack::transfer_type transferType,
            const audio_offload_info_t *offloadInfo,
            uid_t uid,
            pid_t pid,
            const audio_attributes_t* pAttributes,
            bool doNotReconnect,
            float maxRequiredSpeed
        ) {
        return new AudioTrack(
            streamType, sampleRate, format, channelMask, sharedBuffer, flags, cbf,
            user, notificationFrames, sessionId, transferType, offloadInfo, uid, pid, pAttributes, doNotReconnect, maxRequiredSpeed, "");
    }

    // libwfdmmsink.so
    // libwfdcommonutils.so
    sp<SurfaceControl> _ZN7android21SurfaceComposerClient13createSurfaceERKNS_7String8EjjijPNS_14SurfaceControlENS_13LayerMetadataE(SurfaceComposerClient* client, const String8& name, uint32_t w, uint32_t h, PixelFormat format, uint32_t flags, SurfaceControl* parent, LayerMetadata metadata) asm("_ZN7android21SurfaceComposerClient13createSurfaceERKNS_7String8EjjijPNS_14SurfaceControlENS_13LayerMetadataE");
    sp<SurfaceControl> _ZN7android21SurfaceComposerClient13createSurfaceERKNS_7String8EjjijPNS_14SurfaceControlENS_13LayerMetadataE(
            SurfaceComposerClient* client,
            const String8& name,
            uint32_t w,
            uint32_t h,
            PixelFormat format,
            uint32_t flags,
            SurfaceControl* parent,
            LayerMetadata metadata
        ) {
        return client->createSurface(
            name, w, h, format, flags, nullptr, metadata, nullptr);
    }
}
