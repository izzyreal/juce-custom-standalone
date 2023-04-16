# juce-custom-standalone

Minimal example of custom standalone JUCE Projucer project.

Run it in Debug to see some messages printed to the console that let you verify indeed `StandaloneFilter.cpp` is used, and further customization by returning a different `StandaloneFilterWindow` implementation is possible by modifying `StandaloneFilterApp::createWindow` in `StandaloneFilter.cpp`.
