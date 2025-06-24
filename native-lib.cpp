

JNIEXPORT void JNICALL
Java_com_example_edgeviewer_NativeBridge_processFrame(JNIEnv *env, jobject, jbyteArray frameData, jint width, jint height) {
    jbyte* data = env->GetByteArrayElements(frameData, nullptr);
    cv::Mat yuv(height + height / 2, width, CV_8UC1, data);
    cv::Mat bgr;
    cv::cvtColor(yuv, bgr, cv::COLOR_YUV2BGR_NV21);
    cv::Mat edges;
    cv::Canny(bgr, edges, 50, 150);
    env->ReleaseByteArrayElements(frameData, data, 0);
}
