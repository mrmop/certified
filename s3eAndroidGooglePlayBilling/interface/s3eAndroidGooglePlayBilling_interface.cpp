/*
 * WARNING: this is an autogenerated file and will be overwritten by
 * the extension interface script.
 */

#include "s3eExt.h"
#include "IwDebug.h"
#include "s3eDevice.h"


#include "s3eAndroidGooglePlayBilling.h"


// For MIPs (and WP8) platform we do not have asm code for stack switching 
// implemented. So we make LoaderCallStart call manually to set GlobalLock
#if defined __mips || defined S3E_ANDROID_X86 || (defined(WINAPI_FAMILY) && (WINAPI_FAMILY == WINAPI_FAMILY_PHONE_APP))
#define LOADER_CALL
#endif

/**
 * Definitions for functions types passed to/from s3eExt interface
 */
typedef  s3eResult(*s3eAndroidGooglePlayBillingRegister_t)(s3eAndroidGooglePlayBillingCallback cbid, s3eCallback fn, void* userData);
typedef  s3eResult(*s3eAndroidGooglePlayBillingUnRegister_t)(s3eAndroidGooglePlayBillingCallback cbid, s3eCallback fn);
typedef       void(*s3eAndroidGooglePlayBillingStart_t)(const char* base64PublicKey);
typedef       void(*s3eAndroidGooglePlayBillingStop_t)();
typedef  s3eResult(*s3eAndroidGooglePlayBillingIsSupported_t)();
typedef       void(*s3eAndroidGooglePlayBillingRequestPurchase_t)(const char* productID, bool inApp, const char* developerPayLoad);
typedef       void(*s3eAndroidGooglePlayBillingRequestProductInformation_t)(const char** inAppProducts, int numInAppProducts, const char** subProducts, int numSubProducts);
typedef       void(*s3eAndroidGooglePlayBillingRestoreTransactions_t)();
typedef       void(*s3eAndroidGooglePlayBillingConsumeItem_t)(const char* purchaseToken);

/**
 * struct that gets filled in by s3eAndroidGooglePlayBillingRegister
 */
typedef struct s3eAndroidGooglePlayBillingFuncs
{
    s3eAndroidGooglePlayBillingRegister_t m_s3eAndroidGooglePlayBillingRegister;
    s3eAndroidGooglePlayBillingUnRegister_t m_s3eAndroidGooglePlayBillingUnRegister;
    s3eAndroidGooglePlayBillingStart_t m_s3eAndroidGooglePlayBillingStart;
    s3eAndroidGooglePlayBillingStop_t m_s3eAndroidGooglePlayBillingStop;
    s3eAndroidGooglePlayBillingIsSupported_t m_s3eAndroidGooglePlayBillingIsSupported;
    s3eAndroidGooglePlayBillingRequestPurchase_t m_s3eAndroidGooglePlayBillingRequestPurchase;
    s3eAndroidGooglePlayBillingRequestProductInformation_t m_s3eAndroidGooglePlayBillingRequestProductInformation;
    s3eAndroidGooglePlayBillingRestoreTransactions_t m_s3eAndroidGooglePlayBillingRestoreTransactions;
    s3eAndroidGooglePlayBillingConsumeItem_t m_s3eAndroidGooglePlayBillingConsumeItem;
} s3eAndroidGooglePlayBillingFuncs;

static s3eAndroidGooglePlayBillingFuncs g_Ext;
static bool g_GotExt = false;
static bool g_TriedExt = false;
static bool g_TriedNoMsgExt = false;

static bool _extLoad()
{
    if (!g_GotExt && !g_TriedExt)
    {
        s3eResult res = s3eExtGetHash(0xe13464e5, &g_Ext, sizeof(g_Ext));
        if (res == S3E_RESULT_SUCCESS)
            g_GotExt = true;
        else
            s3eDebugAssertShow(S3E_MESSAGE_CONTINUE_STOP_IGNORE,                 "error loading extension: s3eAndroidGooglePlayBilling");
            
        g_TriedExt = true;
        g_TriedNoMsgExt = true;
    }

    return g_GotExt;
}

static bool _extLoadNoMsg()
{
    if (!g_GotExt && !g_TriedNoMsgExt)
    {
        s3eResult res = s3eExtGetHash(0xe13464e5, &g_Ext, sizeof(g_Ext));
        if (res == S3E_RESULT_SUCCESS)
            g_GotExt = true;
        g_TriedNoMsgExt = true;
        if (g_TriedExt)
            g_TriedExt = true;
    }

    return g_GotExt;
}

s3eBool s3eAndroidGooglePlayBillingAvailable()
{
    _extLoadNoMsg();
    return g_GotExt ? S3E_TRUE : S3E_FALSE;
}

s3eResult s3eAndroidGooglePlayBillingRegister(s3eAndroidGooglePlayBillingCallback cbid, s3eCallback fn, void* userData)
{
    IwTrace(ANDROIDGOOGLEPLAYBILLING_VERBOSE, ("calling s3eAndroidGooglePlayBilling[0] func: s3eAndroidGooglePlayBillingRegister"));

    if (!_extLoad())
        return S3E_RESULT_ERROR;

#ifdef LOADER_CALL
    s3eDeviceLoaderCallStart(S3E_TRUE, NULL);
#endif

    s3eResult ret = g_Ext.m_s3eAndroidGooglePlayBillingRegister(cbid, fn, userData);

#ifdef LOADER_CALL
    s3eDeviceLoaderCallDone(S3E_TRUE, NULL);
#endif

    return ret;
}

s3eResult s3eAndroidGooglePlayBillingUnRegister(s3eAndroidGooglePlayBillingCallback cbid, s3eCallback fn)
{
    IwTrace(ANDROIDGOOGLEPLAYBILLING_VERBOSE, ("calling s3eAndroidGooglePlayBilling[1] func: s3eAndroidGooglePlayBillingUnRegister"));

    if (!_extLoad())
        return S3E_RESULT_ERROR;

#ifdef LOADER_CALL
    s3eDeviceLoaderCallStart(S3E_TRUE, NULL);
#endif

    s3eResult ret = g_Ext.m_s3eAndroidGooglePlayBillingUnRegister(cbid, fn);

#ifdef LOADER_CALL
    s3eDeviceLoaderCallDone(S3E_TRUE, NULL);
#endif

    return ret;
}

void s3eAndroidGooglePlayBillingStart(const char* base64PublicKey)
{
    IwTrace(ANDROIDGOOGLEPLAYBILLING_VERBOSE, ("calling s3eAndroidGooglePlayBilling[2] func: s3eAndroidGooglePlayBillingStart"));

    if (!_extLoad())
        return;

#ifdef LOADER_CALL
    s3eDeviceLoaderCallStart(S3E_TRUE, NULL);
#endif

    g_Ext.m_s3eAndroidGooglePlayBillingStart(base64PublicKey);

#ifdef LOADER_CALL
    s3eDeviceLoaderCallDone(S3E_TRUE, NULL);
#endif

    return;
}

void s3eAndroidGooglePlayBillingStop()
{
    IwTrace(ANDROIDGOOGLEPLAYBILLING_VERBOSE, ("calling s3eAndroidGooglePlayBilling[3] func: s3eAndroidGooglePlayBillingStop"));

    if (!_extLoad())
        return;

#ifdef LOADER_CALL
    s3eDeviceLoaderCallStart(S3E_TRUE, NULL);
#endif

    g_Ext.m_s3eAndroidGooglePlayBillingStop();

#ifdef LOADER_CALL
    s3eDeviceLoaderCallDone(S3E_TRUE, NULL);
#endif

    return;
}

s3eResult s3eAndroidGooglePlayBillingIsSupported()
{
    IwTrace(ANDROIDGOOGLEPLAYBILLING_VERBOSE, ("calling s3eAndroidGooglePlayBilling[4] func: s3eAndroidGooglePlayBillingIsSupported"));

    if (!_extLoad())
        return S3E_RESULT_ERROR;

#ifdef LOADER_CALL
    s3eDeviceLoaderCallStart(S3E_TRUE, NULL);
#endif

    s3eResult ret = g_Ext.m_s3eAndroidGooglePlayBillingIsSupported();

#ifdef LOADER_CALL
    s3eDeviceLoaderCallDone(S3E_TRUE, NULL);
#endif

    return ret;
}

void s3eAndroidGooglePlayBillingRequestPurchase(const char* productID, bool inApp, const char* developerPayLoad)
{
    IwTrace(ANDROIDGOOGLEPLAYBILLING_VERBOSE, ("calling s3eAndroidGooglePlayBilling[5] func: s3eAndroidGooglePlayBillingRequestPurchase"));

    if (!_extLoad())
        return;

#ifdef LOADER_CALL
    s3eDeviceLoaderCallStart(S3E_TRUE, NULL);
#endif

    g_Ext.m_s3eAndroidGooglePlayBillingRequestPurchase(productID, inApp, developerPayLoad);

#ifdef LOADER_CALL
    s3eDeviceLoaderCallDone(S3E_TRUE, NULL);
#endif

    return;
}

void s3eAndroidGooglePlayBillingRequestProductInformation(const char** inAppProducts, int numInAppProducts, const char** subProducts, int numSubProducts)
{
    IwTrace(ANDROIDGOOGLEPLAYBILLING_VERBOSE, ("calling s3eAndroidGooglePlayBilling[6] func: s3eAndroidGooglePlayBillingRequestProductInformation"));

    if (!_extLoad())
        return;

#ifdef LOADER_CALL
    s3eDeviceLoaderCallStart(S3E_TRUE, NULL);
#endif

    g_Ext.m_s3eAndroidGooglePlayBillingRequestProductInformation(inAppProducts, numInAppProducts, subProducts, numSubProducts);

#ifdef LOADER_CALL
    s3eDeviceLoaderCallDone(S3E_TRUE, NULL);
#endif

    return;
}

void s3eAndroidGooglePlayBillingRestoreTransactions()
{
    IwTrace(ANDROIDGOOGLEPLAYBILLING_VERBOSE, ("calling s3eAndroidGooglePlayBilling[7] func: s3eAndroidGooglePlayBillingRestoreTransactions"));

    if (!_extLoad())
        return;

#ifdef LOADER_CALL
    s3eDeviceLoaderCallStart(S3E_TRUE, NULL);
#endif

    g_Ext.m_s3eAndroidGooglePlayBillingRestoreTransactions();

#ifdef LOADER_CALL
    s3eDeviceLoaderCallDone(S3E_TRUE, NULL);
#endif

    return;
}

void s3eAndroidGooglePlayBillingConsumeItem(const char* purchaseToken)
{
    IwTrace(ANDROIDGOOGLEPLAYBILLING_VERBOSE, ("calling s3eAndroidGooglePlayBilling[8] func: s3eAndroidGooglePlayBillingConsumeItem"));

    if (!_extLoad())
        return;

#ifdef LOADER_CALL
    s3eDeviceLoaderCallStart(S3E_TRUE, NULL);
#endif

    g_Ext.m_s3eAndroidGooglePlayBillingConsumeItem(purchaseToken);

#ifdef LOADER_CALL
    s3eDeviceLoaderCallDone(S3E_TRUE, NULL);
#endif

    return;
}
