#pragma once

#include <juce_audio_utils/juce_audio_utils.h>

class CustomStandaloneProcessor : public juce::AudioProcessor
{
private:
    void processBlock(juce::AudioBuffer<float>&, juce::MidiBuffer&) override;

    juce::AudioProcessorEditor* createEditor() override;

    double getTailLengthSeconds() const override { return 0; }

    bool acceptsMidi() const override { return 0; }

    bool producesMidi() const override { return 0; }


public:
    void prepareToPlay (double sampleRate,
                                int maximumExpectedSamplesPerBlock) override {}
    
    void releaseResources() override {}
    
    const juce::String getName() const override { return ""; }
    
    bool hasEditor() const override {
        return true;
    }
    
    int getNumPrograms() override {
        return 0;
    }
    
    int getCurrentProgram() override {
        return 0;
    }
    
    void setCurrentProgram(int index) override {
    }
    
    const juce::String getProgramName(int index) override {
        return "";
    }
    
    void changeProgramName(int index, const juce::String &newName) override {
    }
    
    void getStateInformation(juce::MemoryBlock &destData) override {
    }
    
    void setStateInformation(const void *data, int sizeInBytes) override {
    }
};
