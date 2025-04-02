#include "message.h"

const char* message_id_to_string(message_id_enum message_id) {
    switch (message_id) {
        case XSystem_Open: return "XSystem_Open";
        case XSystem_Close: return "XSystem_Close";
        case XSystem_GetObjectInfo: return "XSystem_GetObjectInfo";
        case XSystem_CreateIOContext: return "XSystem_CreateIOContext";
        case XSystem_DestroyIOContext: return "XSystem_DestroyIOContext";
        case XSystem_CreateMetaDevice: return "XSystem_CreateMetaDevice";
        case XSystem_DestroyMetaDevice: return "XSystem_DestroyMetaDevice";
        case XSystem_ReadSetting: return "XSystem_ReadSetting";
        case XSystem_WriteSetting: return "XSystem_WriteSetting";
        case XSystem_DeleteSetting: return "XSystem_DeleteSetting";
        case XIOContext_SetClientControlPort: return "XIOContext_SetClientControlPort";
        case XIOContext_Start: return "XIOContext_Start";
        case XIOContext_Stop: return "XIOContext_Stop";
        case XObject_HasProperty: return "XObject_HasProperty";
        case XObject_IsPropertySettable: return "XObject_IsPropertySettable";
        case XObject_GetPropertyData: return "XObject_GetPropertyData";
        case XObject_GetPropertyData_DI32: return "XObject_GetPropertyData_DI32";
        case XObject_GetPropertyData_DI32_QI32: return "XObject_GetPropertyData_DI32_QI32";
        case XObject_GetPropertyData_DI32_QCFString: return "XObject_GetPropertyData_DI32_QCFString";
        case XObject_GetPropertyData_DAI32: return "XObject_GetPropertyData_DAI32";
        case XObject_GetPropertyData_DAI32_QAI32: return "XObject_GetPropertyData_DAI32_QAI32";
        case XObject_GetPropertyData_DCFString: return "XObject_GetPropertyData_DCFString";
        case XObject_GetPropertyData_DCFString_QI32: return "XObject_GetPropertyData_DCFString_QI32";
        case XObject_GetPropertyData_DF32: return "XObject_GetPropertyData_DF32";
        case XObject_GetPropertyData_DF32_QF32: return "XObject_GetPropertyData_DF32_QF32";
        case XObject_GetPropertyData_DF64: return "XObject_GetPropertyData_DF64";
        case XObject_GetPropertyData_DAF64: return "XObject_GetPropertyData_DAF64";
        case XObject_GetPropertyData_DPList: return "XObject_GetPropertyData_DPList";
        case XObject_GetPropertyData_DCFURL: return "XObject_GetPropertyData_DCFURL";
        case XObject_SetPropertyData: return "XObject_SetPropertyData";
        case XObject_SetPropertyData_DI32: return "XObject_SetPropertyData_DI32";
        case XObject_SetPropertyData_DF32: return "XObject_SetPropertyData_DF32";
        case XObject_SetPropertyData_DF64: return "XObject_SetPropertyData_DF64";
        case XObject_SetPropertyData_DCFString: return "XObject_SetPropertyData_DCFString";
        case XObject_SetPropertyData_DPList: return "XObject_SetPropertyData_DPList";
        case XObject_AddPropertyListener: return "XObject_AddPropertyListener";
        case XObject_RemovePropertyListener: return "XObject_RemovePropertyListener";
        case XSystem_OpenWithBundleID: return "XSystem_OpenWithBundleID";
        case XTransportManager_CreateDevice: return "XTransportManager_CreateDevice";
        case XTransportManager_DestroyDevice: return "XTransportManager_DestroyDevice";
        case XObject_GetPropertyData_DCFString_QRaw: return "XObject_GetPropertyData_DCFString_QRaw";
        case XObject_GetPropertyData_DCFString_QCFString: return "XObject_GetPropertyData_DCFString_QCFString";
        case XObject_GetPropertyData_DCFString_QPList: return "XObject_GetPropertyData_DCFString_QPList";
        case XObject_GetPropertyData_DPList_QRaw: return "XObject_GetPropertyData_DPList_QRaw";
        case XObject_GetPropertyData_DPList_QCFString: return "XObject_GetPropertyData_DPList_QCFString";
        case XObject_GetPropertyData_DPList_QPList: return "XObject_GetPropertyData_DPList_QPList";
        case XObject_SetPropertyData_DAI32: return "XObject_SetPropertyData_DAI32";
        case XObject_SetPropertyData_DCFString_QRaw: return "XObject_SetPropertyData_DCFString_QRaw";
        case XObject_SetPropertyData_DCFString_QCFString: return "XObject_SetPropertyData_DCFString_QCFString";
        case XObject_SetPropertyData_DCFString_QPList: return "XObject_SetPropertyData_DCFString_QPList";
        case XObject_SetPropertyData_DPList_QRaw: return "XObject_SetPropertyData_DPList_QRaw";
        case XObject_SetPropertyData_DPList_QCFString: return "XObject_SetPropertyData_DPList_QCFString";
        case XObject_SetPropertyData_DPList_QPList: return "XObject_SetPropertyData_DPList_QPList";
        case XSystem_OpenWithBundleIDAndLinkage: return "XSystem_OpenWithBundleIDAndLinkage";
        case XIOContext_StartAtTime: return "XIOContext_StartAtTime";
        case XObject_GetPropertyData_DAI64: return "XObject_GetPropertyData_DAI64";
        case XObject_GetPropertyData_DAI64_QAI64: return "XObject_GetPropertyData_DAI64_QAI64";
        case XObject_SetPropertyData_DAI64: return "XObject_SetPropertyData_DAI64";
        case XIOContext_Start_With_WorkInterval: return "XIOContext_Start_With_WorkInterval";
        case XIOContext_Fetch_Workgroup_Port: return "XIOContext_Fetch_Workgroup_Port";
        case XSystem_OpenWithBundleIDLinkageAndKind: return "XSystem_OpenWithBundleIDLinkageAndKind";
        case XSystem_OpenWithBundleIDLinkageAndKindAndSynchronousGroupProperties: return "XSystem_OpenWithBundleIDLinkageAndKindAndSynchronousGroupProperties";
        case XSystem_OpenWithBundleIDLinkageAndKindAndShmem: return "XSystem_OpenWithBundleIDLinkageAndKindAndShmem";
        case XIOContext_Start_Shmem: return "XIOContext_Start_Shmem";
        case XIOContext_StartAtTime_Shmem: return "XIOContext_StartAtTime_Shmem";
        case XIOContext_Start_With_WorkInterval_Shmem: return "XIOContext_Start_With_WorkInterval_Shmem";
        case XSystem_OpenWithBundleIDLinkageAndKindAndSynchronousGroupPropertiesAndShmem: return "XSystem_OpenWithBundleIDLinkageAndKindAndSynchronousGroupPropertiesAndShmem";
        case XIOContext_WaitForTap: return "XIOContext_WaitForTap";
        case XIOContext_StopWaitingForTap: return "XIOContext_StopWaitingForTap";
        case XIOContext_Start_With_Shmem_SemaphoreTimeout: return "XIOContext_Start_With_Shmem_SemaphoreTimeout";
        case XIOContext_StartAtTime_With_Shmem_SemaphoreTimeout: return "XIOContext_StartAtTime_With_Shmem_SemaphoreTimeout";
        case XSystem_OpenWithBundleIDLinkageAndKindAndSynchronousGroupPropertiesAndShmemAndTimeout: return "XSystem_OpenWithBundleIDLinkageAndKindAndSynchronousGroupPropertiesAndShmemAndTimeout";
        default: return "Unknown Message ID";
    }
}

std::set<message_id_enum> ool_descriptor_set = {
    XObject_SetPropertyData,
    XIOContext_SetClientControlPort,
    XIOContext_Start,
    XIOContext_StartAtTime,
    XIOContext_Start_With_WorkInterval,
    XObject_GetPropertyData,
    XObject_GetPropertyData_DAI32_QAI32,
    XObject_GetPropertyData_DAI64_QAI64,
    XObject_GetPropertyData_DCFString_QCFString,
    XObject_GetPropertyData_DCFString_QPList,
    XObject_GetPropertyData_DCFString_QRaw,
    XObject_GetPropertyData_DI32_QCFString,
    XObject_GetPropertyData_DPList_QCFString,
    XObject_GetPropertyData_DPList_QPList,
    XObject_GetPropertyData_DPList_QRaw,
    XObject_SetPropertyData_DAI32,
    XObject_SetPropertyData_DAI64,
    XObject_SetPropertyData_DCFString,
    XObject_SetPropertyData_DCFString_QCFString,
    XObject_SetPropertyData_DCFString_QPList,
    XObject_SetPropertyData_DCFString_QRaw,
    XObject_SetPropertyData_DPList,
    XObject_SetPropertyData_DPList_QCFString,
    XObject_SetPropertyData_DPList_QPList,
    XObject_SetPropertyData_DPList_QRaw,
    XSystem_CreateIOContext,
    XSystem_CreateMetaDevice,
    XSystem_DeleteSetting,
    XSystem_Open,
    XSystem_OpenWithBundleID,
    XSystem_OpenWithBundleIDAndLinkage,
    XSystem_OpenWithBundleIDLinkageAndKind,
    XSystem_OpenWithBundleIDLinkageAndKindAndSynchronousGroupProperties,
    XSystem_ReadSetting,
    XSystem_WriteSetting,
    XTransportManager_CreateDevice
};