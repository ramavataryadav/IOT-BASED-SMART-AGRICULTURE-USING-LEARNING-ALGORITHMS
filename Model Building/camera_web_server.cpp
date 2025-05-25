#include <WebServer.h>
WebServer server(80);

void handleCapture() {
  camera_fb_t *fb = esp_camera_fb_get();
  if (!fb) {
    server.send(500, "text/plain", "Camera capture failed");
    return;
  }
  server.send_P(200, "image/jpeg", (char *)fb->buf, fb->len);
  esp_camera_fb_return(fb);
}

void startCameraServer() {
  server.on("/", HTTP_GET, handleCapture);
  server.begin();
  Serial.println("HTTP server started");
}
