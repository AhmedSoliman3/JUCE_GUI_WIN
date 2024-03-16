#include "MainComponent.h"

//==============================================================================
MainComponent::MainComponent()
{
    addAndMakeVisible(toButton1);
    addAndMakeVisible(toButton2);
    addAndMakeVisible(toButton3);
    addAndMakeVisible(textButton);

    setSize (600, 400);
}

MainComponent::~MainComponent()
{
}

//==============================================================================
void MainComponent::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));

    g.setFont (juce::Font (48.0f));
    g.setColour(juce::Colours::cyan);//white);
    g.drawText ("Hello World!", getLocalBounds(), juce::Justification::centred, true);
}

void MainComponent::resized()
{
    // This is called when the MainComponent is resized.
    // If you add any child components, this is where you should
    // update their positions.
    toButton1.setBounds(10,10,70,30);
    toButton1.setButtonText("check 1");
    toButton2.setBounds(10, 50, 70, 30);
    toButton2.setButtonText("check 2");
    toButton3.setBounds(10, 90, 70, 30);
    toButton3.setButtonText("check 3");
    textButton.setBounds(10, 130, 70, 30);
    textButton.setButtonText("Press");

}
