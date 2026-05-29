#include "SentrySettings.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5CommonUtils -ObjectName=R5DumpCallstackSentryBeforeSendHandler -FallbackName=R5DumpCallstackSentryBeforeSendHandler

USentrySettings::USentrySettings() {
    this->InitAutomatically = true;
    this->Dsn = TEXT("https://f2a1748c41a90b6d049e4dde779f3edd@sentry.windrose.support/3");
    this->Debug = false;
    this->SampleRate = 1.00f;
    this->EnableAutoLogAttachment = true;
    this->AttachStacktrace = true;
    this->SendDefaultPii = false;
    this->AttachScreenshot = false;
    this->AttachGpuDump = true;
    this->MaxAttachmentSize = 20971520;
    this->EnableStructuredLogging = false;
    this->bSendBreadcrumbsWithStructuredLogging = false;
    this->MaxBreadcrumbs = 100;
    this->EnableAutoSessionTracking = true;
    this->SessionTimeout = 30000;
    this->OverrideReleaseName = false;
    this->UseProxy = false;
    this->BeforeSendHandler = nullptr;
    this->BeforeBreadcrumbHandler = NULL;
    this->BeforeLogHandler = NULL;
    this->EnableAutoCrashCapturing = true;
    this->DatabaseLocation = ESentryDatabaseLocation::ProjectUserDirectory;
    this->CrashpadWaitForUpload = false;
    this->EnableAppNotRespondingTracking = false;
    this->EnableTracing = false;
    this->SamplingType = ESentryTracesSamplingType::UniformSampleRate;
    this->TracesSampleRate = 0.00f;
    this->TracesSampler = NULL;
    this->EnableForPromotedBuildsOnly = false;
    this->UploadSymbolsAutomatically = false;
    this->IncludeSources = false;
    this->DiagnosticLevel = ESentryCliLogLevel::Info;
    this->UseLegacyGradlePlugin = false;
    this->CrashReporterUrl = TEXT("https://sentry.windrose.support/api/3/unreal/f2a1748c41a90b6d049e4dde779f3edd/");
    this->bRequireUserConsent = false;
    this->bDefaultUserConsentGiven = true;
}


