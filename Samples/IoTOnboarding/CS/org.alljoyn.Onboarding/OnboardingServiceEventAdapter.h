//-----------------------------------------------------------------------------
// <auto-generated> 
//   This code was generated by a tool. 
// 
//   Changes to this file may cause incorrect behavior and will be lost if  
//   the code is regenerated.
//
//   Tool: AllJoynCodeGenerator.exe
//
//   This tool is located in the Windows 10 SDK and the Windows 10 AllJoyn 
//   Visual Studio Extension in the Visual Studio Gallery.  
//
//   The generated code should be packaged in a Windows 10 C++/CX Runtime  
//   Component which can be consumed in any UWP-supported language using 
//   APIs that are available in Windows.Devices.AllJoyn.
//
//   Using AllJoynCodeGenerator - Invoke the following command with a valid 
//   Introspection XML file and a writable output directory:
//     AllJoynCodeGenerator -i <INPUT XML FILE> -o <OUTPUT DIRECTORY>
// </auto-generated>
//-----------------------------------------------------------------------------
#pragma once

namespace org { namespace alljoyn { namespace Onboarding {

// This class, and the associated EventArgs classes, exist for the benefit of JavaScript developers who
// do not have the ability to implement IOnboardingService. Instead, OnboardingServiceEventAdapter
// provides the Interface implementation and exposes a set of compatible events to the developer.
public ref class OnboardingServiceEventAdapter sealed : [Windows::Foundation::Metadata::Default] IOnboardingService
{
public:
    // Method Invocation Events
    event Windows::Foundation::TypedEventHandler<OnboardingServiceEventAdapter^, OnboardingConfigureWifiCalledEventArgs^>^ ConfigureWifiCalled;
    event Windows::Foundation::TypedEventHandler<OnboardingServiceEventAdapter^, OnboardingConnectCalledEventArgs^>^ ConnectCalled;
    event Windows::Foundation::TypedEventHandler<OnboardingServiceEventAdapter^, OnboardingOffboardCalledEventArgs^>^ OffboardCalled;
    event Windows::Foundation::TypedEventHandler<OnboardingServiceEventAdapter^, OnboardingGetScanInfoCalledEventArgs^>^ GetScanInfoCalled;

    // Property Read Events
    event Windows::Foundation::TypedEventHandler<OnboardingServiceEventAdapter^, OnboardingGetVersionRequestedEventArgs^>^ GetVersionRequested;
    event Windows::Foundation::TypedEventHandler<OnboardingServiceEventAdapter^, OnboardingGetStateRequestedEventArgs^>^ GetStateRequested;
    event Windows::Foundation::TypedEventHandler<OnboardingServiceEventAdapter^, OnboardingGetLastErrorRequestedEventArgs^>^ GetLastErrorRequested;
    
    // Property Write Events

    // IOnboardingService Implementation
    virtual Windows::Foundation::IAsyncOperation<OnboardingConfigureWifiResult^>^ ConfigureWifiAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info, _In_ Platform::String^ interfaceMemberSSID, _In_ Platform::String^ interfaceMemberPassphrase, _In_ int16 interfaceMemberAuthType);
    virtual Windows::Foundation::IAsyncOperation<OnboardingConnectResult^>^ ConnectAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);
    virtual Windows::Foundation::IAsyncOperation<OnboardingOffboardResult^>^ OffboardAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);
    virtual Windows::Foundation::IAsyncOperation<OnboardingGetScanInfoResult^>^ GetScanInfoAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

    virtual Windows::Foundation::IAsyncOperation<OnboardingGetVersionResult^>^ GetVersionAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);
    virtual Windows::Foundation::IAsyncOperation<OnboardingGetStateResult^>^ GetStateAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);
    virtual Windows::Foundation::IAsyncOperation<OnboardingGetLastErrorResult^>^ GetLastErrorAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

};

} } } 
