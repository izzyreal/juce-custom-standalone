#pragma once

#include <juce_audio_utils/juce_audio_utils.h>

class CustomStandaloneProcessor;

class CustomStandaloneEditor : public juce::AudioProcessorEditor
{
public:
    explicit CustomStandaloneEditor(CustomStandaloneProcessor&);

    void paint(juce::Graphics&) override;
    void resized() override;
};
