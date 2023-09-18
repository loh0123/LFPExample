// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LohFunctionPluginVoxel/Public/Voxel/LFPVoxelNetworkProxyComponent.h"
#include "LohFunctionPlugin/Public/Components/LFPGridContainerComponent.h"
#include "LohFunctionPlugin/Public/Components/LFPTCPSocketComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLFPVoxelNetworkProxyComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	LOHFUNCTIONPLUGIN_API UClass* Z_Construct_UClass_ULFPGridContainerComponent_NoRegister();
	LOHFUNCTIONPLUGIN_API UClass* Z_Construct_UClass_ULFPTCPSocketComponent_NoRegister();
	LOHFUNCTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FLFPGridUpdateAction();
	LOHFUNCTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FLFPTCPSocketSetting();
	LOHFUNCTIONPLUGINVOXEL_API UClass* Z_Construct_UClass_ULFPVoxelNetworkProxyComponent();
	LOHFUNCTIONPLUGINVOXEL_API UClass* Z_Construct_UClass_ULFPVoxelNetworkProxyComponent_NoRegister();
	LOHFUNCTIONPLUGINVOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FLFPVoxelNetworkProxyReceiveInfo();
	LOHFUNCTIONPLUGINVOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FLFPVoxelNetworkProxySendInfo();
	UPackage* Z_Construct_UPackage__Script_LohFunctionPluginVoxel();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LFPVoxelNetworkProxySendInfo;
class UScriptStruct* FLFPVoxelNetworkProxySendInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LFPVoxelNetworkProxySendInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LFPVoxelNetworkProxySendInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLFPVoxelNetworkProxySendInfo, (UObject*)Z_Construct_UPackage__Script_LohFunctionPluginVoxel(), TEXT("LFPVoxelNetworkProxySendInfo"));
	}
	return Z_Registration_Info_UScriptStruct_LFPVoxelNetworkProxySendInfo.OuterSingleton;
}
template<> LOHFUNCTIONPLUGINVOXEL_API UScriptStruct* StaticStruct<FLFPVoxelNetworkProxySendInfo>()
{
	return FLFPVoxelNetworkProxySendInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLFPVoxelNetworkProxySendInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChuckList_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChuckList_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_ChuckList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPVoxelNetworkProxySendInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelNetworkProxyComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLFPVoxelNetworkProxySendInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLFPVoxelNetworkProxySendInfo>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLFPVoxelNetworkProxySendInfo_Statics::NewProp_ChuckList_ElementProp = { "ChuckList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPVoxelNetworkProxySendInfo_Statics::NewProp_ChuckList_MetaData[] = {
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelNetworkProxyComponent.h" },
	};
#endif
	static_assert(TModels_V<CGetTypeHashable, FIntPoint>, "The structure 'FIntPoint' is used in a TSet but does not have a GetValueTypeHash defined");
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FLFPVoxelNetworkProxySendInfo_Statics::NewProp_ChuckList = { "ChuckList", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPVoxelNetworkProxySendInfo, ChuckList), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPVoxelNetworkProxySendInfo_Statics::NewProp_ChuckList_MetaData), Z_Construct_UScriptStruct_FLFPVoxelNetworkProxySendInfo_Statics::NewProp_ChuckList_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLFPVoxelNetworkProxySendInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPVoxelNetworkProxySendInfo_Statics::NewProp_ChuckList_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPVoxelNetworkProxySendInfo_Statics::NewProp_ChuckList,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLFPVoxelNetworkProxySendInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionPluginVoxel,
		nullptr,
		&NewStructOps,
		"LFPVoxelNetworkProxySendInfo",
		Z_Construct_UScriptStruct_FLFPVoxelNetworkProxySendInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPVoxelNetworkProxySendInfo_Statics::PropPointers),
		sizeof(FLFPVoxelNetworkProxySendInfo),
		alignof(FLFPVoxelNetworkProxySendInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPVoxelNetworkProxySendInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLFPVoxelNetworkProxySendInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPVoxelNetworkProxySendInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLFPVoxelNetworkProxySendInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_LFPVoxelNetworkProxySendInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LFPVoxelNetworkProxySendInfo.InnerSingleton, Z_Construct_UScriptStruct_FLFPVoxelNetworkProxySendInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LFPVoxelNetworkProxySendInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LFPVoxelNetworkProxyReceiveInfo;
class UScriptStruct* FLFPVoxelNetworkProxyReceiveInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LFPVoxelNetworkProxyReceiveInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LFPVoxelNetworkProxyReceiveInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLFPVoxelNetworkProxyReceiveInfo, (UObject*)Z_Construct_UPackage__Script_LohFunctionPluginVoxel(), TEXT("LFPVoxelNetworkProxyReceiveInfo"));
	}
	return Z_Registration_Info_UScriptStruct_LFPVoxelNetworkProxyReceiveInfo.OuterSingleton;
}
template<> LOHFUNCTIONPLUGINVOXEL_API UScriptStruct* StaticStruct<FLFPVoxelNetworkProxyReceiveInfo>()
{
	return FLFPVoxelNetworkProxyReceiveInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLFPVoxelNetworkProxyReceiveInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataSendAmount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DataSendAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DataSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPVoxelNetworkProxyReceiveInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelNetworkProxyComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLFPVoxelNetworkProxyReceiveInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLFPVoxelNetworkProxyReceiveInfo>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLFPVoxelNetworkProxyReceiveInfo_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPVoxelNetworkProxyReceiveInfo_Statics::NewProp_Data_MetaData[] = {
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelNetworkProxyComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLFPVoxelNetworkProxyReceiveInfo_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPVoxelNetworkProxyReceiveInfo, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPVoxelNetworkProxyReceiveInfo_Statics::NewProp_Data_MetaData), Z_Construct_UScriptStruct_FLFPVoxelNetworkProxyReceiveInfo_Statics::NewProp_Data_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPVoxelNetworkProxyReceiveInfo_Statics::NewProp_DataSendAmount_MetaData[] = {
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelNetworkProxyComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLFPVoxelNetworkProxyReceiveInfo_Statics::NewProp_DataSendAmount = { "DataSendAmount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPVoxelNetworkProxyReceiveInfo, DataSendAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPVoxelNetworkProxyReceiveInfo_Statics::NewProp_DataSendAmount_MetaData), Z_Construct_UScriptStruct_FLFPVoxelNetworkProxyReceiveInfo_Statics::NewProp_DataSendAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPVoxelNetworkProxyReceiveInfo_Statics::NewProp_DataSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelNetworkProxyComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLFPVoxelNetworkProxyReceiveInfo_Statics::NewProp_DataSize = { "DataSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPVoxelNetworkProxyReceiveInfo, DataSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPVoxelNetworkProxyReceiveInfo_Statics::NewProp_DataSize_MetaData), Z_Construct_UScriptStruct_FLFPVoxelNetworkProxyReceiveInfo_Statics::NewProp_DataSize_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLFPVoxelNetworkProxyReceiveInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPVoxelNetworkProxyReceiveInfo_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPVoxelNetworkProxyReceiveInfo_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPVoxelNetworkProxyReceiveInfo_Statics::NewProp_DataSendAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPVoxelNetworkProxyReceiveInfo_Statics::NewProp_DataSize,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLFPVoxelNetworkProxyReceiveInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionPluginVoxel,
		nullptr,
		&NewStructOps,
		"LFPVoxelNetworkProxyReceiveInfo",
		Z_Construct_UScriptStruct_FLFPVoxelNetworkProxyReceiveInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPVoxelNetworkProxyReceiveInfo_Statics::PropPointers),
		sizeof(FLFPVoxelNetworkProxyReceiveInfo),
		alignof(FLFPVoxelNetworkProxyReceiveInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPVoxelNetworkProxyReceiveInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLFPVoxelNetworkProxyReceiveInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPVoxelNetworkProxyReceiveInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLFPVoxelNetworkProxyReceiveInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_LFPVoxelNetworkProxyReceiveInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LFPVoxelNetworkProxyReceiveInfo.InnerSingleton, Z_Construct_UScriptStruct_FLFPVoxelNetworkProxyReceiveInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LFPVoxelNetworkProxyReceiveInfo.InnerSingleton;
	}
	DEFINE_FUNCTION(ULFPVoxelNetworkProxyComponent::execOnNetworkMessage)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SocketID);
		P_GET_PROPERTY(FIntProperty,Z_Param_ClientID);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Bytes);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNetworkMessage(Z_Param_SocketID,Z_Param_ClientID,Z_Param_Out_Bytes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPVoxelNetworkProxyComponent::execOnChuckUpdate)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_RegionIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_ChuckIndex);
		P_GET_STRUCT_REF(FLFPGridUpdateAction,Z_Param_Out_VoxelUpdateAction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnChuckUpdate(Z_Param_RegionIndex,Z_Param_ChuckIndex,Z_Param_Out_VoxelUpdateAction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPVoxelNetworkProxyComponent::execRequestChuckData)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_RegionIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_ChuckIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_ClientID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestChuckData(Z_Param_RegionIndex,Z_Param_ChuckIndex,Z_Param_ClientID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPVoxelNetworkProxyComponent::execSetupProxy)
	{
		P_GET_OBJECT(ULFPGridContainerComponent,Z_Param_InVoxelContainer);
		P_GET_OBJECT(ULFPTCPSocketComponent,Z_Param_InNetworkSocket);
		P_GET_STRUCT(FLFPTCPSocketSetting,Z_Param_SocketSetting);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetupProxy(Z_Param_InVoxelContainer,Z_Param_InNetworkSocket,Z_Param_SocketSetting);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPVoxelNetworkProxyComponent::execGetDataCompleteness)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ClientID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDataCompleteness(Z_Param_ClientID);
		P_NATIVE_END;
	}
	void ULFPVoxelNetworkProxyComponent::StaticRegisterNativesULFPVoxelNetworkProxyComponent()
	{
		UClass* Class = ULFPVoxelNetworkProxyComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDataCompleteness", &ULFPVoxelNetworkProxyComponent::execGetDataCompleteness },
			{ "OnChuckUpdate", &ULFPVoxelNetworkProxyComponent::execOnChuckUpdate },
			{ "OnNetworkMessage", &ULFPVoxelNetworkProxyComponent::execOnNetworkMessage },
			{ "RequestChuckData", &ULFPVoxelNetworkProxyComponent::execRequestChuckData },
			{ "SetupProxy", &ULFPVoxelNetworkProxyComponent::execSetupProxy },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_GetDataCompleteness_Statics
	{
		struct LFPVoxelNetworkProxyComponent_eventGetDataCompleteness_Parms
		{
			int32 ClientID;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClientID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ClientID;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_GetDataCompleteness_Statics::NewProp_ClientID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_GetDataCompleteness_Statics::NewProp_ClientID = { "ClientID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPVoxelNetworkProxyComponent_eventGetDataCompleteness_Parms, ClientID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_GetDataCompleteness_Statics::NewProp_ClientID_MetaData), Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_GetDataCompleteness_Statics::NewProp_ClientID_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_GetDataCompleteness_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPVoxelNetworkProxyComponent_eventGetDataCompleteness_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_GetDataCompleteness_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_GetDataCompleteness_Statics::NewProp_ClientID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_GetDataCompleteness_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_GetDataCompleteness_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPVoxelNetworkProxyComponent | Function" },
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelNetworkProxyComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_GetDataCompleteness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPVoxelNetworkProxyComponent, nullptr, "GetDataCompleteness", nullptr, nullptr, Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_GetDataCompleteness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_GetDataCompleteness_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_GetDataCompleteness_Statics::LFPVoxelNetworkProxyComponent_eventGetDataCompleteness_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_GetDataCompleteness_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_GetDataCompleteness_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_GetDataCompleteness_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_GetDataCompleteness_Statics::LFPVoxelNetworkProxyComponent_eventGetDataCompleteness_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_GetDataCompleteness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_GetDataCompleteness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_OnChuckUpdate_Statics
	{
		struct LFPVoxelNetworkProxyComponent_eventOnChuckUpdate_Parms
		{
			int32 RegionIndex;
			int32 ChuckIndex;
			FLFPGridUpdateAction VoxelUpdateAction;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegionIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RegionIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChuckIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChuckIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoxelUpdateAction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VoxelUpdateAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_OnChuckUpdate_Statics::NewProp_RegionIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_OnChuckUpdate_Statics::NewProp_RegionIndex = { "RegionIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPVoxelNetworkProxyComponent_eventOnChuckUpdate_Parms, RegionIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_OnChuckUpdate_Statics::NewProp_RegionIndex_MetaData), Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_OnChuckUpdate_Statics::NewProp_RegionIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_OnChuckUpdate_Statics::NewProp_ChuckIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_OnChuckUpdate_Statics::NewProp_ChuckIndex = { "ChuckIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPVoxelNetworkProxyComponent_eventOnChuckUpdate_Parms, ChuckIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_OnChuckUpdate_Statics::NewProp_ChuckIndex_MetaData), Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_OnChuckUpdate_Statics::NewProp_ChuckIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_OnChuckUpdate_Statics::NewProp_VoxelUpdateAction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_OnChuckUpdate_Statics::NewProp_VoxelUpdateAction = { "VoxelUpdateAction", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPVoxelNetworkProxyComponent_eventOnChuckUpdate_Parms, VoxelUpdateAction), Z_Construct_UScriptStruct_FLFPGridUpdateAction, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_OnChuckUpdate_Statics::NewProp_VoxelUpdateAction_MetaData), Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_OnChuckUpdate_Statics::NewProp_VoxelUpdateAction_MetaData) }; // 1107001714
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_OnChuckUpdate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_OnChuckUpdate_Statics::NewProp_RegionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_OnChuckUpdate_Statics::NewProp_ChuckIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_OnChuckUpdate_Statics::NewProp_VoxelUpdateAction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_OnChuckUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelNetworkProxyComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_OnChuckUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPVoxelNetworkProxyComponent, nullptr, "OnChuckUpdate", nullptr, nullptr, Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_OnChuckUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_OnChuckUpdate_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_OnChuckUpdate_Statics::LFPVoxelNetworkProxyComponent_eventOnChuckUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_OnChuckUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_OnChuckUpdate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_OnChuckUpdate_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_OnChuckUpdate_Statics::LFPVoxelNetworkProxyComponent_eventOnChuckUpdate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_OnChuckUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_OnChuckUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_OnNetworkMessage_Statics
	{
		struct LFPVoxelNetworkProxyComponent_eventOnNetworkMessage_Parms
		{
			int32 SocketID;
			int32 ClientID;
			TArray<uint8> Bytes;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocketID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SocketID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClientID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ClientID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Bytes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bytes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Bytes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_OnNetworkMessage_Statics::NewProp_SocketID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_OnNetworkMessage_Statics::NewProp_SocketID = { "SocketID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPVoxelNetworkProxyComponent_eventOnNetworkMessage_Parms, SocketID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_OnNetworkMessage_Statics::NewProp_SocketID_MetaData), Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_OnNetworkMessage_Statics::NewProp_SocketID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_OnNetworkMessage_Statics::NewProp_ClientID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_OnNetworkMessage_Statics::NewProp_ClientID = { "ClientID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPVoxelNetworkProxyComponent_eventOnNetworkMessage_Parms, ClientID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_OnNetworkMessage_Statics::NewProp_ClientID_MetaData), Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_OnNetworkMessage_Statics::NewProp_ClientID_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_OnNetworkMessage_Statics::NewProp_Bytes_Inner = { "Bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_OnNetworkMessage_Statics::NewProp_Bytes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_OnNetworkMessage_Statics::NewProp_Bytes = { "Bytes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPVoxelNetworkProxyComponent_eventOnNetworkMessage_Parms, Bytes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_OnNetworkMessage_Statics::NewProp_Bytes_MetaData), Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_OnNetworkMessage_Statics::NewProp_Bytes_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_OnNetworkMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_OnNetworkMessage_Statics::NewProp_SocketID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_OnNetworkMessage_Statics::NewProp_ClientID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_OnNetworkMessage_Statics::NewProp_Bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_OnNetworkMessage_Statics::NewProp_Bytes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_OnNetworkMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelNetworkProxyComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_OnNetworkMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPVoxelNetworkProxyComponent, nullptr, "OnNetworkMessage", nullptr, nullptr, Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_OnNetworkMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_OnNetworkMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_OnNetworkMessage_Statics::LFPVoxelNetworkProxyComponent_eventOnNetworkMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_OnNetworkMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_OnNetworkMessage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_OnNetworkMessage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_OnNetworkMessage_Statics::LFPVoxelNetworkProxyComponent_eventOnNetworkMessage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_OnNetworkMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_OnNetworkMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_RequestChuckData_Statics
	{
		struct LFPVoxelNetworkProxyComponent_eventRequestChuckData_Parms
		{
			int32 RegionIndex;
			int32 ChuckIndex;
			int32 ClientID;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegionIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RegionIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChuckIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChuckIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClientID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ClientID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_RequestChuckData_Statics::NewProp_RegionIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_RequestChuckData_Statics::NewProp_RegionIndex = { "RegionIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPVoxelNetworkProxyComponent_eventRequestChuckData_Parms, RegionIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_RequestChuckData_Statics::NewProp_RegionIndex_MetaData), Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_RequestChuckData_Statics::NewProp_RegionIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_RequestChuckData_Statics::NewProp_ChuckIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_RequestChuckData_Statics::NewProp_ChuckIndex = { "ChuckIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPVoxelNetworkProxyComponent_eventRequestChuckData_Parms, ChuckIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_RequestChuckData_Statics::NewProp_ChuckIndex_MetaData), Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_RequestChuckData_Statics::NewProp_ChuckIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_RequestChuckData_Statics::NewProp_ClientID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_RequestChuckData_Statics::NewProp_ClientID = { "ClientID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPVoxelNetworkProxyComponent_eventRequestChuckData_Parms, ClientID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_RequestChuckData_Statics::NewProp_ClientID_MetaData), Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_RequestChuckData_Statics::NewProp_ClientID_MetaData) };
	void Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_RequestChuckData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPVoxelNetworkProxyComponent_eventRequestChuckData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_RequestChuckData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPVoxelNetworkProxyComponent_eventRequestChuckData_Parms), &Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_RequestChuckData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_RequestChuckData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_RequestChuckData_Statics::NewProp_RegionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_RequestChuckData_Statics::NewProp_ChuckIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_RequestChuckData_Statics::NewProp_ClientID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_RequestChuckData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_RequestChuckData_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPVoxelNetworkProxyComponent | Function" },
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelNetworkProxyComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_RequestChuckData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPVoxelNetworkProxyComponent, nullptr, "RequestChuckData", nullptr, nullptr, Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_RequestChuckData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_RequestChuckData_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_RequestChuckData_Statics::LFPVoxelNetworkProxyComponent_eventRequestChuckData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_RequestChuckData_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_RequestChuckData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_RequestChuckData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_RequestChuckData_Statics::LFPVoxelNetworkProxyComponent_eventRequestChuckData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_RequestChuckData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_RequestChuckData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_SetupProxy_Statics
	{
		struct LFPVoxelNetworkProxyComponent_eventSetupProxy_Parms
		{
			ULFPGridContainerComponent* InVoxelContainer;
			ULFPTCPSocketComponent* InNetworkSocket;
			FLFPTCPSocketSetting SocketSetting;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InVoxelContainer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InVoxelContainer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InNetworkSocket_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InNetworkSocket;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocketSetting_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SocketSetting;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_SetupProxy_Statics::NewProp_InVoxelContainer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_SetupProxy_Statics::NewProp_InVoxelContainer = { "InVoxelContainer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPVoxelNetworkProxyComponent_eventSetupProxy_Parms, InVoxelContainer), Z_Construct_UClass_ULFPGridContainerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_SetupProxy_Statics::NewProp_InVoxelContainer_MetaData), Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_SetupProxy_Statics::NewProp_InVoxelContainer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_SetupProxy_Statics::NewProp_InNetworkSocket_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_SetupProxy_Statics::NewProp_InNetworkSocket = { "InNetworkSocket", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPVoxelNetworkProxyComponent_eventSetupProxy_Parms, InNetworkSocket), Z_Construct_UClass_ULFPTCPSocketComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_SetupProxy_Statics::NewProp_InNetworkSocket_MetaData), Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_SetupProxy_Statics::NewProp_InNetworkSocket_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_SetupProxy_Statics::NewProp_SocketSetting_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_SetupProxy_Statics::NewProp_SocketSetting = { "SocketSetting", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPVoxelNetworkProxyComponent_eventSetupProxy_Parms, SocketSetting), Z_Construct_UScriptStruct_FLFPTCPSocketSetting, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_SetupProxy_Statics::NewProp_SocketSetting_MetaData), Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_SetupProxy_Statics::NewProp_SocketSetting_MetaData) }; // 816566264
	void Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_SetupProxy_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPVoxelNetworkProxyComponent_eventSetupProxy_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_SetupProxy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPVoxelNetworkProxyComponent_eventSetupProxy_Parms), &Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_SetupProxy_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_SetupProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_SetupProxy_Statics::NewProp_InVoxelContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_SetupProxy_Statics::NewProp_InNetworkSocket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_SetupProxy_Statics::NewProp_SocketSetting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_SetupProxy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_SetupProxy_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPVoxelNetworkProxyComponent | Function" },
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelNetworkProxyComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_SetupProxy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPVoxelNetworkProxyComponent, nullptr, "SetupProxy", nullptr, nullptr, Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_SetupProxy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_SetupProxy_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_SetupProxy_Statics::LFPVoxelNetworkProxyComponent_eventSetupProxy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_SetupProxy_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_SetupProxy_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_SetupProxy_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_SetupProxy_Statics::LFPVoxelNetworkProxyComponent_eventSetupProxy_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_SetupProxy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_SetupProxy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULFPVoxelNetworkProxyComponent);
	UClass* Z_Construct_UClass_ULFPVoxelNetworkProxyComponent_NoRegister()
	{
		return ULFPVoxelNetworkProxyComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULFPVoxelNetworkProxyComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IncomeDataMap_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_IncomeDataMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IncomeDataMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_IncomeDataMap;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChuckUpdateQueue_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChuckUpdateQueue_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChuckUpdateQueue_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ChuckUpdateQueue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoxelContainer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VoxelContainer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NetworkSocket_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NetworkSocket;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocketIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SocketIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsServer_MetaData[];
#endif
		static void NewProp_bIsServer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsServer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULFPVoxelNetworkProxyComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionPluginVoxel,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPVoxelNetworkProxyComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ULFPVoxelNetworkProxyComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_GetDataCompleteness, "GetDataCompleteness" }, // 1438372771
		{ &Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_OnChuckUpdate, "OnChuckUpdate" }, // 3067856477
		{ &Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_OnNetworkMessage, "OnNetworkMessage" }, // 1977028727
		{ &Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_RequestChuckData, "RequestChuckData" }, // 861257818
		{ &Z_Construct_UFunction_ULFPVoxelNetworkProxyComponent_SetupProxy, "SetupProxy" }, // 1405630617
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPVoxelNetworkProxyComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPVoxelNetworkProxyComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Voxel/LFPVoxelNetworkProxyComponent.h" },
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelNetworkProxyComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULFPVoxelNetworkProxyComponent_Statics::NewProp_IncomeDataMap_ValueProp = { "IncomeDataMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FLFPVoxelNetworkProxyReceiveInfo, METADATA_PARAMS(0, nullptr) }; // 1243079113
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULFPVoxelNetworkProxyComponent_Statics::NewProp_IncomeDataMap_Key_KeyProp = { "IncomeDataMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPVoxelNetworkProxyComponent_Statics::NewProp_IncomeDataMap_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Runtime Data\n" },
#endif
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelNetworkProxyComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Runtime Data" },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULFPVoxelNetworkProxyComponent_Statics::NewProp_IncomeDataMap = { "IncomeDataMap", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULFPVoxelNetworkProxyComponent, IncomeDataMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPVoxelNetworkProxyComponent_Statics::NewProp_IncomeDataMap_MetaData), Z_Construct_UClass_ULFPVoxelNetworkProxyComponent_Statics::NewProp_IncomeDataMap_MetaData) }; // 1243079113
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULFPVoxelNetworkProxyComponent_Statics::NewProp_ChuckUpdateQueue_ValueProp = { "ChuckUpdateQueue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FLFPVoxelNetworkProxySendInfo, METADATA_PARAMS(0, nullptr) }; // 214777951
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULFPVoxelNetworkProxyComponent_Statics::NewProp_ChuckUpdateQueue_Key_KeyProp = { "ChuckUpdateQueue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPVoxelNetworkProxyComponent_Statics::NewProp_ChuckUpdateQueue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelNetworkProxyComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULFPVoxelNetworkProxyComponent_Statics::NewProp_ChuckUpdateQueue = { "ChuckUpdateQueue", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULFPVoxelNetworkProxyComponent, ChuckUpdateQueue), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPVoxelNetworkProxyComponent_Statics::NewProp_ChuckUpdateQueue_MetaData), Z_Construct_UClass_ULFPVoxelNetworkProxyComponent_Statics::NewProp_ChuckUpdateQueue_MetaData) }; // 214777951
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPVoxelNetworkProxyComponent_Statics::NewProp_VoxelContainer_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelNetworkProxyComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULFPVoxelNetworkProxyComponent_Statics::NewProp_VoxelContainer = { "VoxelContainer", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULFPVoxelNetworkProxyComponent, VoxelContainer), Z_Construct_UClass_ULFPGridContainerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPVoxelNetworkProxyComponent_Statics::NewProp_VoxelContainer_MetaData), Z_Construct_UClass_ULFPVoxelNetworkProxyComponent_Statics::NewProp_VoxelContainer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPVoxelNetworkProxyComponent_Statics::NewProp_NetworkSocket_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelNetworkProxyComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULFPVoxelNetworkProxyComponent_Statics::NewProp_NetworkSocket = { "NetworkSocket", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULFPVoxelNetworkProxyComponent, NetworkSocket), Z_Construct_UClass_ULFPTCPSocketComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPVoxelNetworkProxyComponent_Statics::NewProp_NetworkSocket_MetaData), Z_Construct_UClass_ULFPVoxelNetworkProxyComponent_Statics::NewProp_NetworkSocket_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPVoxelNetworkProxyComponent_Statics::NewProp_SocketIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelNetworkProxyComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULFPVoxelNetworkProxyComponent_Statics::NewProp_SocketIndex = { "SocketIndex", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULFPVoxelNetworkProxyComponent, SocketIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPVoxelNetworkProxyComponent_Statics::NewProp_SocketIndex_MetaData), Z_Construct_UClass_ULFPVoxelNetworkProxyComponent_Statics::NewProp_SocketIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPVoxelNetworkProxyComponent_Statics::NewProp_bIsServer_MetaData[] = {
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelNetworkProxyComponent.h" },
	};
#endif
	void Z_Construct_UClass_ULFPVoxelNetworkProxyComponent_Statics::NewProp_bIsServer_SetBit(void* Obj)
	{
		((ULFPVoxelNetworkProxyComponent*)Obj)->bIsServer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULFPVoxelNetworkProxyComponent_Statics::NewProp_bIsServer = { "bIsServer", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULFPVoxelNetworkProxyComponent), &Z_Construct_UClass_ULFPVoxelNetworkProxyComponent_Statics::NewProp_bIsServer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPVoxelNetworkProxyComponent_Statics::NewProp_bIsServer_MetaData), Z_Construct_UClass_ULFPVoxelNetworkProxyComponent_Statics::NewProp_bIsServer_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULFPVoxelNetworkProxyComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPVoxelNetworkProxyComponent_Statics::NewProp_IncomeDataMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPVoxelNetworkProxyComponent_Statics::NewProp_IncomeDataMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPVoxelNetworkProxyComponent_Statics::NewProp_IncomeDataMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPVoxelNetworkProxyComponent_Statics::NewProp_ChuckUpdateQueue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPVoxelNetworkProxyComponent_Statics::NewProp_ChuckUpdateQueue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPVoxelNetworkProxyComponent_Statics::NewProp_ChuckUpdateQueue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPVoxelNetworkProxyComponent_Statics::NewProp_VoxelContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPVoxelNetworkProxyComponent_Statics::NewProp_NetworkSocket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPVoxelNetworkProxyComponent_Statics::NewProp_SocketIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPVoxelNetworkProxyComponent_Statics::NewProp_bIsServer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULFPVoxelNetworkProxyComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULFPVoxelNetworkProxyComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULFPVoxelNetworkProxyComponent_Statics::ClassParams = {
		&ULFPVoxelNetworkProxyComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULFPVoxelNetworkProxyComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULFPVoxelNetworkProxyComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPVoxelNetworkProxyComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULFPVoxelNetworkProxyComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPVoxelNetworkProxyComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ULFPVoxelNetworkProxyComponent()
	{
		if (!Z_Registration_Info_UClass_ULFPVoxelNetworkProxyComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULFPVoxelNetworkProxyComponent.OuterSingleton, Z_Construct_UClass_ULFPVoxelNetworkProxyComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULFPVoxelNetworkProxyComponent.OuterSingleton;
	}
	template<> LOHFUNCTIONPLUGINVOXEL_API UClass* StaticClass<ULFPVoxelNetworkProxyComponent>()
	{
		return ULFPVoxelNetworkProxyComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULFPVoxelNetworkProxyComponent);
	ULFPVoxelNetworkProxyComponent::~ULFPVoxelNetworkProxyComponent() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginVoxel_Public_Voxel_LFPVoxelNetworkProxyComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginVoxel_Public_Voxel_LFPVoxelNetworkProxyComponent_h_Statics::ScriptStructInfo[] = {
		{ FLFPVoxelNetworkProxySendInfo::StaticStruct, Z_Construct_UScriptStruct_FLFPVoxelNetworkProxySendInfo_Statics::NewStructOps, TEXT("LFPVoxelNetworkProxySendInfo"), &Z_Registration_Info_UScriptStruct_LFPVoxelNetworkProxySendInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLFPVoxelNetworkProxySendInfo), 214777951U) },
		{ FLFPVoxelNetworkProxyReceiveInfo::StaticStruct, Z_Construct_UScriptStruct_FLFPVoxelNetworkProxyReceiveInfo_Statics::NewStructOps, TEXT("LFPVoxelNetworkProxyReceiveInfo"), &Z_Registration_Info_UScriptStruct_LFPVoxelNetworkProxyReceiveInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLFPVoxelNetworkProxyReceiveInfo), 1243079113U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginVoxel_Public_Voxel_LFPVoxelNetworkProxyComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULFPVoxelNetworkProxyComponent, ULFPVoxelNetworkProxyComponent::StaticClass, TEXT("ULFPVoxelNetworkProxyComponent"), &Z_Registration_Info_UClass_ULFPVoxelNetworkProxyComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULFPVoxelNetworkProxyComponent), 156494470U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginVoxel_Public_Voxel_LFPVoxelNetworkProxyComponent_h_278911798(TEXT("/Script/LohFunctionPluginVoxel"),
		Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginVoxel_Public_Voxel_LFPVoxelNetworkProxyComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginVoxel_Public_Voxel_LFPVoxelNetworkProxyComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginVoxel_Public_Voxel_LFPVoxelNetworkProxyComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginVoxel_Public_Voxel_LFPVoxelNetworkProxyComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
