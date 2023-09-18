// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LohFunctionPlugin/Public/Components/LFPTCPSocketComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLFPTCPSocketComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	LOHFUNCTIONPLUGIN_API UClass* Z_Construct_UClass_ULFPTCPSocketComponent();
	LOHFUNCTIONPLUGIN_API UClass* Z_Construct_UClass_ULFPTCPSocketComponent_NoRegister();
	LOHFUNCTIONPLUGIN_API UEnum* Z_Construct_UEnum_LohFunctionPlugin_ELFPTCPDIsconnectFlags();
	LOHFUNCTIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketDisconnect__DelegateSignature();
	LOHFUNCTIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketEvent__DelegateSignature();
	LOHFUNCTIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketMessage__DelegateSignature();
	LOHFUNCTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FLFPTCPSocketSetting();
	UPackage* Z_Construct_UPackage__Script_LohFunctionPlugin();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELFPTCPDIsconnectFlags;
	static UEnum* ELFPTCPDIsconnectFlags_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELFPTCPDIsconnectFlags.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELFPTCPDIsconnectFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LohFunctionPlugin_ELFPTCPDIsconnectFlags, (UObject*)Z_Construct_UPackage__Script_LohFunctionPlugin(), TEXT("ELFPTCPDIsconnectFlags"));
		}
		return Z_Registration_Info_UEnum_ELFPTCPDIsconnectFlags.OuterSingleton;
	}
	template<> LOHFUNCTIONPLUGIN_API UEnum* StaticEnum<ELFPTCPDIsconnectFlags>()
	{
		return ELFPTCPDIsconnectFlags_StaticEnum();
	}
	struct Z_Construct_UEnum_LohFunctionPlugin_ELFPTCPDIsconnectFlags_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LohFunctionPlugin_ELFPTCPDIsconnectFlags_Statics::Enumerators[] = {
		{ "ELFPTCPDIsconnectFlags::LFP_User", (int64)ELFPTCPDIsconnectFlags::LFP_User },
		{ "ELFPTCPDIsconnectFlags::LFP_NoConnection", (int64)ELFPTCPDIsconnectFlags::LFP_NoConnection },
		{ "ELFPTCPDIsconnectFlags::LFP_LoseConnection", (int64)ELFPTCPDIsconnectFlags::LFP_LoseConnection },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LohFunctionPlugin_ELFPTCPDIsconnectFlags_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LFP_LoseConnection.DisplayName", "LoseConnection" },
		{ "LFP_LoseConnection.Name", "ELFPTCPDIsconnectFlags::LFP_LoseConnection" },
		{ "LFP_NoConnection.DisplayName", "NoConnection" },
		{ "LFP_NoConnection.Name", "ELFPTCPDIsconnectFlags::LFP_NoConnection" },
		{ "LFP_User.DisplayName", "User" },
		{ "LFP_User.Name", "ELFPTCPDIsconnectFlags::LFP_User" },
		{ "ModuleRelativePath", "Public/Components/LFPTCPSocketComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LohFunctionPlugin_ELFPTCPDIsconnectFlags_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LohFunctionPlugin,
		nullptr,
		"ELFPTCPDIsconnectFlags",
		"ELFPTCPDIsconnectFlags",
		Z_Construct_UEnum_LohFunctionPlugin_ELFPTCPDIsconnectFlags_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LohFunctionPlugin_ELFPTCPDIsconnectFlags_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LohFunctionPlugin_ELFPTCPDIsconnectFlags_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LohFunctionPlugin_ELFPTCPDIsconnectFlags_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_LohFunctionPlugin_ELFPTCPDIsconnectFlags()
	{
		if (!Z_Registration_Info_UEnum_ELFPTCPDIsconnectFlags.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELFPTCPDIsconnectFlags.InnerSingleton, Z_Construct_UEnum_LohFunctionPlugin_ELFPTCPDIsconnectFlags_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELFPTCPDIsconnectFlags.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LFPTCPSocketSetting;
class UScriptStruct* FLFPTCPSocketSetting::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LFPTCPSocketSetting.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LFPTCPSocketSetting.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLFPTCPSocketSetting, (UObject*)Z_Construct_UPackage__Script_LohFunctionPlugin(), TEXT("LFPTCPSocketSetting"));
	}
	return Z_Registration_Info_UScriptStruct_LFPTCPSocketSetting.OuterSingleton;
}
template<> LOHFUNCTIONPLUGIN_API UScriptStruct* StaticStruct<FLFPTCPSocketSetting>()
{
	return FLFPTCPSocketSetting::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLFPTCPSocketSetting_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxReconnectAttempt_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MaxReconnectAttempt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxConnection_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxConnection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BufferMaxSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BufferMaxSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerDescription_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ServerDescription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClientDescription_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ClientDescription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IP_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_IP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReconnectTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReconnectTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TickInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TickInterval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSocketReusable_MetaData[];
#endif
		static void NewProp_bSocketReusable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSocketReusable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPTCPSocketSetting_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/LFPTCPSocketComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLFPTCPSocketSetting_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLFPTCPSocketSetting>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPTCPSocketSetting_Statics::NewProp_MaxReconnectAttempt_MetaData[] = {
		{ "Category", "LFPTCPSocketSetting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How many time to try reconnect. */" },
#endif
		{ "ModuleRelativePath", "Public/Components/LFPTCPSocketComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How many time to try reconnect." },
#endif
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLFPTCPSocketSetting_Statics::NewProp_MaxReconnectAttempt = { "MaxReconnectAttempt", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPTCPSocketSetting, MaxReconnectAttempt), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPTCPSocketSetting_Statics::NewProp_MaxReconnectAttempt_MetaData), Z_Construct_UScriptStruct_FLFPTCPSocketSetting_Statics::NewProp_MaxReconnectAttempt_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPTCPSocketSetting_Statics::NewProp_MaxConnection_MetaData[] = {
		{ "Category", "LFPTCPSocketSetting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Soceket listen amount, if -1 than switch to client mode. */" },
#endif
		{ "ModuleRelativePath", "Public/Components/LFPTCPSocketComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Soceket listen amount, if -1 than switch to client mode." },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLFPTCPSocketSetting_Statics::NewProp_MaxConnection = { "MaxConnection", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPTCPSocketSetting, MaxConnection), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPTCPSocketSetting_Statics::NewProp_MaxConnection_MetaData), Z_Construct_UScriptStruct_FLFPTCPSocketSetting_Statics::NewProp_MaxConnection_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPTCPSocketSetting_Statics::NewProp_BufferMaxSize_MetaData[] = {
		{ "Category", "LFPTCPSocketSetting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Soceket read and write buffer size. */" },
#endif
		{ "ModuleRelativePath", "Public/Components/LFPTCPSocketComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Soceket read and write buffer size." },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLFPTCPSocketSetting_Statics::NewProp_BufferMaxSize = { "BufferMaxSize", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPTCPSocketSetting, BufferMaxSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPTCPSocketSetting_Statics::NewProp_BufferMaxSize_MetaData), Z_Construct_UScriptStruct_FLFPTCPSocketSetting_Statics::NewProp_BufferMaxSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPTCPSocketSetting_Statics::NewProp_ServerDescription_MetaData[] = {
		{ "Category", "LFPTCPSocketSetting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Holds the main socket description. */" },
#endif
		{ "ModuleRelativePath", "Public/Components/LFPTCPSocketComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Holds the main socket description." },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLFPTCPSocketSetting_Statics::NewProp_ServerDescription = { "ServerDescription", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPTCPSocketSetting, ServerDescription), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPTCPSocketSetting_Statics::NewProp_ServerDescription_MetaData), Z_Construct_UScriptStruct_FLFPTCPSocketSetting_Statics::NewProp_ServerDescription_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPTCPSocketSetting_Statics::NewProp_ClientDescription_MetaData[] = {
		{ "Category", "LFPTCPSocketSetting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Holds the connected socket description. */" },
#endif
		{ "ModuleRelativePath", "Public/Components/LFPTCPSocketComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Holds the connected socket description." },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLFPTCPSocketSetting_Statics::NewProp_ClientDescription = { "ClientDescription", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPTCPSocketSetting, ClientDescription), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPTCPSocketSetting_Statics::NewProp_ClientDescription_MetaData), Z_Construct_UScriptStruct_FLFPTCPSocketSetting_Statics::NewProp_ClientDescription_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPTCPSocketSetting_Statics::NewProp_IP_MetaData[] = {
		{ "Category", "LFPTCPSocketSetting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Holds the server / client IP. */" },
#endif
		{ "ModuleRelativePath", "Public/Components/LFPTCPSocketComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Holds the server / client IP." },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLFPTCPSocketSetting_Statics::NewProp_IP = { "IP", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPTCPSocketSetting, IP), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPTCPSocketSetting_Statics::NewProp_IP_MetaData), Z_Construct_UScriptStruct_FLFPTCPSocketSetting_Statics::NewProp_IP_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPTCPSocketSetting_Statics::NewProp_Port_MetaData[] = {
		{ "Category", "LFPTCPSocketSetting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Holds the server / client port. */" },
#endif
		{ "ModuleRelativePath", "Public/Components/LFPTCPSocketComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Holds the server / client port." },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLFPTCPSocketSetting_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPTCPSocketSetting, Port), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPTCPSocketSetting_Statics::NewProp_Port_MetaData), Z_Construct_UScriptStruct_FLFPTCPSocketSetting_Statics::NewProp_Port_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPTCPSocketSetting_Statics::NewProp_ReconnectTime_MetaData[] = {
		{ "Category", "LFPTCPSocketSetting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How much time before trying to reconnect. */" },
#endif
		{ "ModuleRelativePath", "Public/Components/LFPTCPSocketComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How much time before trying to reconnect." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLFPTCPSocketSetting_Statics::NewProp_ReconnectTime = { "ReconnectTime", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPTCPSocketSetting, ReconnectTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPTCPSocketSetting_Statics::NewProp_ReconnectTime_MetaData), Z_Construct_UScriptStruct_FLFPTCPSocketSetting_Statics::NewProp_ReconnectTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPTCPSocketSetting_Statics::NewProp_TickInterval_MetaData[] = {
		{ "Category", "LFPTCPSocketSetting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Holds the time to sleep between checking for pending connections. */" },
#endif
		{ "ModuleRelativePath", "Public/Components/LFPTCPSocketComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Holds the time to sleep between checking for pending connections." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLFPTCPSocketSetting_Statics::NewProp_TickInterval = { "TickInterval", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPTCPSocketSetting, TickInterval), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPTCPSocketSetting_Statics::NewProp_TickInterval_MetaData), Z_Construct_UScriptStruct_FLFPTCPSocketSetting_Statics::NewProp_TickInterval_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPTCPSocketSetting_Statics::NewProp_bSocketReusable_MetaData[] = {
		{ "Category", "LFPTCPSocketSetting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Holds a flag indicating if the bound address can be used by other sockets. */" },
#endif
		{ "ModuleRelativePath", "Public/Components/LFPTCPSocketComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Holds a flag indicating if the bound address can be used by other sockets." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FLFPTCPSocketSetting_Statics::NewProp_bSocketReusable_SetBit(void* Obj)
	{
		((FLFPTCPSocketSetting*)Obj)->bSocketReusable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLFPTCPSocketSetting_Statics::NewProp_bSocketReusable = { "bSocketReusable", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLFPTCPSocketSetting), &Z_Construct_UScriptStruct_FLFPTCPSocketSetting_Statics::NewProp_bSocketReusable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPTCPSocketSetting_Statics::NewProp_bSocketReusable_MetaData), Z_Construct_UScriptStruct_FLFPTCPSocketSetting_Statics::NewProp_bSocketReusable_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLFPTCPSocketSetting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPTCPSocketSetting_Statics::NewProp_MaxReconnectAttempt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPTCPSocketSetting_Statics::NewProp_MaxConnection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPTCPSocketSetting_Statics::NewProp_BufferMaxSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPTCPSocketSetting_Statics::NewProp_ServerDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPTCPSocketSetting_Statics::NewProp_ClientDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPTCPSocketSetting_Statics::NewProp_IP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPTCPSocketSetting_Statics::NewProp_Port,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPTCPSocketSetting_Statics::NewProp_ReconnectTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPTCPSocketSetting_Statics::NewProp_TickInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPTCPSocketSetting_Statics::NewProp_bSocketReusable,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLFPTCPSocketSetting_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionPlugin,
		nullptr,
		&NewStructOps,
		"LFPTCPSocketSetting",
		Z_Construct_UScriptStruct_FLFPTCPSocketSetting_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPTCPSocketSetting_Statics::PropPointers),
		sizeof(FLFPTCPSocketSetting),
		alignof(FLFPTCPSocketSetting),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPTCPSocketSetting_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLFPTCPSocketSetting_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPTCPSocketSetting_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLFPTCPSocketSetting()
	{
		if (!Z_Registration_Info_UScriptStruct_LFPTCPSocketSetting.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LFPTCPSocketSetting.InnerSingleton, Z_Construct_UScriptStruct_FLFPTCPSocketSetting_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LFPTCPSocketSetting.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketEvent__DelegateSignature_Statics
	{
		struct _Script_LohFunctionPlugin_eventLFPTCPSocketEvent_Parms
		{
			int32 SocketID;
			int32 ClientID;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocketID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SocketID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClientID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ClientID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketEvent__DelegateSignature_Statics::NewProp_SocketID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketEvent__DelegateSignature_Statics::NewProp_SocketID = { "SocketID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LohFunctionPlugin_eventLFPTCPSocketEvent_Parms, SocketID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketEvent__DelegateSignature_Statics::NewProp_SocketID_MetaData), Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketEvent__DelegateSignature_Statics::NewProp_SocketID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketEvent__DelegateSignature_Statics::NewProp_ClientID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketEvent__DelegateSignature_Statics::NewProp_ClientID = { "ClientID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LohFunctionPlugin_eventLFPTCPSocketEvent_Parms, ClientID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketEvent__DelegateSignature_Statics::NewProp_ClientID_MetaData), Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketEvent__DelegateSignature_Statics::NewProp_ClientID_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketEvent__DelegateSignature_Statics::NewProp_SocketID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketEvent__DelegateSignature_Statics::NewProp_ClientID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/LFPTCPSocketComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LohFunctionPlugin, nullptr, "LFPTCPSocketEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketEvent__DelegateSignature_Statics::_Script_LohFunctionPlugin_eventLFPTCPSocketEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketEvent__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketEvent__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketEvent__DelegateSignature_Statics::_Script_LohFunctionPlugin_eventLFPTCPSocketEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FLFPTCPSocketEvent_DelegateWrapper(const FMulticastScriptDelegate& LFPTCPSocketEvent, const int32 SocketID, const int32 ClientID)
{
	struct _Script_LohFunctionPlugin_eventLFPTCPSocketEvent_Parms
	{
		int32 SocketID;
		int32 ClientID;
	};
	_Script_LohFunctionPlugin_eventLFPTCPSocketEvent_Parms Parms;
	Parms.SocketID=SocketID;
	Parms.ClientID=ClientID;
	LFPTCPSocketEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketDisconnect__DelegateSignature_Statics
	{
		struct _Script_LohFunctionPlugin_eventLFPTCPSocketDisconnect_Parms
		{
			ELFPTCPDIsconnectFlags DIsconnectFlags;
			FLFPTCPSocketSetting SocketSetting;
			int32 SocketID;
			int32 ClientID;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_DIsconnectFlags_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DIsconnectFlags_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DIsconnectFlags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocketSetting_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SocketSetting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocketID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SocketID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClientID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ClientID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketDisconnect__DelegateSignature_Statics::NewProp_DIsconnectFlags_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketDisconnect__DelegateSignature_Statics::NewProp_DIsconnectFlags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketDisconnect__DelegateSignature_Statics::NewProp_DIsconnectFlags = { "DIsconnectFlags", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LohFunctionPlugin_eventLFPTCPSocketDisconnect_Parms, DIsconnectFlags), Z_Construct_UEnum_LohFunctionPlugin_ELFPTCPDIsconnectFlags, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketDisconnect__DelegateSignature_Statics::NewProp_DIsconnectFlags_MetaData), Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketDisconnect__DelegateSignature_Statics::NewProp_DIsconnectFlags_MetaData) }; // 1803815464
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketDisconnect__DelegateSignature_Statics::NewProp_SocketSetting_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketDisconnect__DelegateSignature_Statics::NewProp_SocketSetting = { "SocketSetting", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LohFunctionPlugin_eventLFPTCPSocketDisconnect_Parms, SocketSetting), Z_Construct_UScriptStruct_FLFPTCPSocketSetting, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketDisconnect__DelegateSignature_Statics::NewProp_SocketSetting_MetaData), Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketDisconnect__DelegateSignature_Statics::NewProp_SocketSetting_MetaData) }; // 816566264
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketDisconnect__DelegateSignature_Statics::NewProp_SocketID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketDisconnect__DelegateSignature_Statics::NewProp_SocketID = { "SocketID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LohFunctionPlugin_eventLFPTCPSocketDisconnect_Parms, SocketID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketDisconnect__DelegateSignature_Statics::NewProp_SocketID_MetaData), Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketDisconnect__DelegateSignature_Statics::NewProp_SocketID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketDisconnect__DelegateSignature_Statics::NewProp_ClientID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketDisconnect__DelegateSignature_Statics::NewProp_ClientID = { "ClientID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LohFunctionPlugin_eventLFPTCPSocketDisconnect_Parms, ClientID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketDisconnect__DelegateSignature_Statics::NewProp_ClientID_MetaData), Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketDisconnect__DelegateSignature_Statics::NewProp_ClientID_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketDisconnect__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketDisconnect__DelegateSignature_Statics::NewProp_DIsconnectFlags_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketDisconnect__DelegateSignature_Statics::NewProp_DIsconnectFlags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketDisconnect__DelegateSignature_Statics::NewProp_SocketSetting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketDisconnect__DelegateSignature_Statics::NewProp_SocketID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketDisconnect__DelegateSignature_Statics::NewProp_ClientID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketDisconnect__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/LFPTCPSocketComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketDisconnect__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LohFunctionPlugin, nullptr, "LFPTCPSocketDisconnect__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketDisconnect__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketDisconnect__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketDisconnect__DelegateSignature_Statics::_Script_LohFunctionPlugin_eventLFPTCPSocketDisconnect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketDisconnect__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketDisconnect__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketDisconnect__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketDisconnect__DelegateSignature_Statics::_Script_LohFunctionPlugin_eventLFPTCPSocketDisconnect_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketDisconnect__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketDisconnect__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FLFPTCPSocketDisconnect_DelegateWrapper(const FMulticastScriptDelegate& LFPTCPSocketDisconnect, const ELFPTCPDIsconnectFlags DIsconnectFlags, const FLFPTCPSocketSetting SocketSetting, const int32 SocketID, const int32 ClientID)
{
	struct _Script_LohFunctionPlugin_eventLFPTCPSocketDisconnect_Parms
	{
		ELFPTCPDIsconnectFlags DIsconnectFlags;
		FLFPTCPSocketSetting SocketSetting;
		int32 SocketID;
		int32 ClientID;
	};
	_Script_LohFunctionPlugin_eventLFPTCPSocketDisconnect_Parms Parms;
	Parms.DIsconnectFlags=DIsconnectFlags;
	Parms.SocketSetting=SocketSetting;
	Parms.SocketID=SocketID;
	Parms.ClientID=ClientID;
	LFPTCPSocketDisconnect.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketMessage__DelegateSignature_Statics
	{
		struct _Script_LohFunctionPlugin_eventLFPTCPSocketMessage_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketMessage__DelegateSignature_Statics::NewProp_SocketID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketMessage__DelegateSignature_Statics::NewProp_SocketID = { "SocketID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LohFunctionPlugin_eventLFPTCPSocketMessage_Parms, SocketID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketMessage__DelegateSignature_Statics::NewProp_SocketID_MetaData), Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketMessage__DelegateSignature_Statics::NewProp_SocketID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketMessage__DelegateSignature_Statics::NewProp_ClientID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketMessage__DelegateSignature_Statics::NewProp_ClientID = { "ClientID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LohFunctionPlugin_eventLFPTCPSocketMessage_Parms, ClientID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketMessage__DelegateSignature_Statics::NewProp_ClientID_MetaData), Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketMessage__DelegateSignature_Statics::NewProp_ClientID_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketMessage__DelegateSignature_Statics::NewProp_Bytes_Inner = { "Bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketMessage__DelegateSignature_Statics::NewProp_Bytes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketMessage__DelegateSignature_Statics::NewProp_Bytes = { "Bytes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LohFunctionPlugin_eventLFPTCPSocketMessage_Parms, Bytes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketMessage__DelegateSignature_Statics::NewProp_Bytes_MetaData), Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketMessage__DelegateSignature_Statics::NewProp_Bytes_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketMessage__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketMessage__DelegateSignature_Statics::NewProp_SocketID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketMessage__DelegateSignature_Statics::NewProp_ClientID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketMessage__DelegateSignature_Statics::NewProp_Bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketMessage__DelegateSignature_Statics::NewProp_Bytes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketMessage__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/LFPTCPSocketComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketMessage__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LohFunctionPlugin, nullptr, "LFPTCPSocketMessage__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketMessage__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketMessage__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketMessage__DelegateSignature_Statics::_Script_LohFunctionPlugin_eventLFPTCPSocketMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketMessage__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketMessage__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketMessage__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketMessage__DelegateSignature_Statics::_Script_LohFunctionPlugin_eventLFPTCPSocketMessage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketMessage__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketMessage__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FLFPTCPSocketMessage_DelegateWrapper(const FMulticastScriptDelegate& LFPTCPSocketMessage, const int32 SocketID, const int32 ClientID, TArray<uint8> const& Bytes)
{
	struct _Script_LohFunctionPlugin_eventLFPTCPSocketMessage_Parms
	{
		int32 SocketID;
		int32 ClientID;
		TArray<uint8> Bytes;
	};
	_Script_LohFunctionPlugin_eventLFPTCPSocketMessage_Parms Parms;
	Parms.SocketID=SocketID;
	Parms.ClientID=ClientID;
	Parms.Bytes=Bytes;
	LFPTCPSocketMessage.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(ULFPTCPSocketComponent::execSendData)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Data);
		P_GET_PROPERTY(FIntProperty,Z_Param_SocketID);
		P_GET_PROPERTY(FIntProperty,Z_Param_ClientID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SendData(Z_Param_Out_Data,Z_Param_SocketID,Z_Param_ClientID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPTCPSocketComponent::execDestroySocket)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SocketID);
		P_GET_PROPERTY(FIntProperty,Z_Param_ClientID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DestroySocket(Z_Param_SocketID,Z_Param_ClientID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPTCPSocketComponent::execCreateSocket)
	{
		P_GET_STRUCT(FLFPTCPSocketSetting,Z_Param_InSocketSetting);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->CreateSocket(Z_Param_InSocketSetting);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPTCPSocketComponent::execResizeSocketList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResizeSocketList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPTCPSocketComponent::execIsSocketValid)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SocketID);
		P_GET_PROPERTY(FIntProperty,Z_Param_ClientID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSocketValid(Z_Param_SocketID,Z_Param_ClientID);
		P_NATIVE_END;
	}
	void ULFPTCPSocketComponent::StaticRegisterNativesULFPTCPSocketComponent()
	{
		UClass* Class = ULFPTCPSocketComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateSocket", &ULFPTCPSocketComponent::execCreateSocket },
			{ "DestroySocket", &ULFPTCPSocketComponent::execDestroySocket },
			{ "IsSocketValid", &ULFPTCPSocketComponent::execIsSocketValid },
			{ "ResizeSocketList", &ULFPTCPSocketComponent::execResizeSocketList },
			{ "SendData", &ULFPTCPSocketComponent::execSendData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULFPTCPSocketComponent_CreateSocket_Statics
	{
		struct LFPTCPSocketComponent_eventCreateSocket_Parms
		{
			FLFPTCPSocketSetting InSocketSetting;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InSocketSetting;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPTCPSocketComponent_CreateSocket_Statics::NewProp_InSocketSetting = { "InSocketSetting", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPTCPSocketComponent_eventCreateSocket_Parms, InSocketSetting), Z_Construct_UScriptStruct_FLFPTCPSocketSetting, METADATA_PARAMS(0, nullptr) }; // 816566264
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPTCPSocketComponent_CreateSocket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPTCPSocketComponent_eventCreateSocket_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPTCPSocketComponent_CreateSocket_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPTCPSocketComponent_CreateSocket_Statics::NewProp_InSocketSetting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPTCPSocketComponent_CreateSocket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPTCPSocketComponent_CreateSocket_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPTCPSocketComponent | Function" },
		{ "ModuleRelativePath", "Public/Components/LFPTCPSocketComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPTCPSocketComponent_CreateSocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPTCPSocketComponent, nullptr, "CreateSocket", nullptr, nullptr, Z_Construct_UFunction_ULFPTCPSocketComponent_CreateSocket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPTCPSocketComponent_CreateSocket_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPTCPSocketComponent_CreateSocket_Statics::LFPTCPSocketComponent_eventCreateSocket_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPTCPSocketComponent_CreateSocket_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPTCPSocketComponent_CreateSocket_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPTCPSocketComponent_CreateSocket_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPTCPSocketComponent_CreateSocket_Statics::LFPTCPSocketComponent_eventCreateSocket_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPTCPSocketComponent_CreateSocket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPTCPSocketComponent_CreateSocket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPTCPSocketComponent_DestroySocket_Statics
	{
		struct LFPTCPSocketComponent_eventDestroySocket_Parms
		{
			int32 SocketID;
			int32 ClientID;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocketID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SocketID;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPTCPSocketComponent_DestroySocket_Statics::NewProp_SocketID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPTCPSocketComponent_DestroySocket_Statics::NewProp_SocketID = { "SocketID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPTCPSocketComponent_eventDestroySocket_Parms, SocketID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPTCPSocketComponent_DestroySocket_Statics::NewProp_SocketID_MetaData), Z_Construct_UFunction_ULFPTCPSocketComponent_DestroySocket_Statics::NewProp_SocketID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPTCPSocketComponent_DestroySocket_Statics::NewProp_ClientID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPTCPSocketComponent_DestroySocket_Statics::NewProp_ClientID = { "ClientID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPTCPSocketComponent_eventDestroySocket_Parms, ClientID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPTCPSocketComponent_DestroySocket_Statics::NewProp_ClientID_MetaData), Z_Construct_UFunction_ULFPTCPSocketComponent_DestroySocket_Statics::NewProp_ClientID_MetaData) };
	void Z_Construct_UFunction_ULFPTCPSocketComponent_DestroySocket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPTCPSocketComponent_eventDestroySocket_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPTCPSocketComponent_DestroySocket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPTCPSocketComponent_eventDestroySocket_Parms), &Z_Construct_UFunction_ULFPTCPSocketComponent_DestroySocket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPTCPSocketComponent_DestroySocket_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPTCPSocketComponent_DestroySocket_Statics::NewProp_SocketID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPTCPSocketComponent_DestroySocket_Statics::NewProp_ClientID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPTCPSocketComponent_DestroySocket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPTCPSocketComponent_DestroySocket_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPTCPSocketComponent | Function" },
		{ "CPP_Default_ClientID", "-1" },
		{ "ModuleRelativePath", "Public/Components/LFPTCPSocketComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPTCPSocketComponent_DestroySocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPTCPSocketComponent, nullptr, "DestroySocket", nullptr, nullptr, Z_Construct_UFunction_ULFPTCPSocketComponent_DestroySocket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPTCPSocketComponent_DestroySocket_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPTCPSocketComponent_DestroySocket_Statics::LFPTCPSocketComponent_eventDestroySocket_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPTCPSocketComponent_DestroySocket_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPTCPSocketComponent_DestroySocket_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPTCPSocketComponent_DestroySocket_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPTCPSocketComponent_DestroySocket_Statics::LFPTCPSocketComponent_eventDestroySocket_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPTCPSocketComponent_DestroySocket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPTCPSocketComponent_DestroySocket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPTCPSocketComponent_IsSocketValid_Statics
	{
		struct LFPTCPSocketComponent_eventIsSocketValid_Parms
		{
			int32 SocketID;
			int32 ClientID;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocketID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SocketID;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPTCPSocketComponent_IsSocketValid_Statics::NewProp_SocketID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPTCPSocketComponent_IsSocketValid_Statics::NewProp_SocketID = { "SocketID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPTCPSocketComponent_eventIsSocketValid_Parms, SocketID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPTCPSocketComponent_IsSocketValid_Statics::NewProp_SocketID_MetaData), Z_Construct_UFunction_ULFPTCPSocketComponent_IsSocketValid_Statics::NewProp_SocketID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPTCPSocketComponent_IsSocketValid_Statics::NewProp_ClientID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPTCPSocketComponent_IsSocketValid_Statics::NewProp_ClientID = { "ClientID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPTCPSocketComponent_eventIsSocketValid_Parms, ClientID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPTCPSocketComponent_IsSocketValid_Statics::NewProp_ClientID_MetaData), Z_Construct_UFunction_ULFPTCPSocketComponent_IsSocketValid_Statics::NewProp_ClientID_MetaData) };
	void Z_Construct_UFunction_ULFPTCPSocketComponent_IsSocketValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPTCPSocketComponent_eventIsSocketValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPTCPSocketComponent_IsSocketValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPTCPSocketComponent_eventIsSocketValid_Parms), &Z_Construct_UFunction_ULFPTCPSocketComponent_IsSocketValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPTCPSocketComponent_IsSocketValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPTCPSocketComponent_IsSocketValid_Statics::NewProp_SocketID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPTCPSocketComponent_IsSocketValid_Statics::NewProp_ClientID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPTCPSocketComponent_IsSocketValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPTCPSocketComponent_IsSocketValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPTCPSocketComponent | Function" },
		{ "CPP_Default_ClientID", "-1" },
		{ "ModuleRelativePath", "Public/Components/LFPTCPSocketComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPTCPSocketComponent_IsSocketValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPTCPSocketComponent, nullptr, "IsSocketValid", nullptr, nullptr, Z_Construct_UFunction_ULFPTCPSocketComponent_IsSocketValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPTCPSocketComponent_IsSocketValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPTCPSocketComponent_IsSocketValid_Statics::LFPTCPSocketComponent_eventIsSocketValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPTCPSocketComponent_IsSocketValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPTCPSocketComponent_IsSocketValid_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPTCPSocketComponent_IsSocketValid_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPTCPSocketComponent_IsSocketValid_Statics::LFPTCPSocketComponent_eventIsSocketValid_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPTCPSocketComponent_IsSocketValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPTCPSocketComponent_IsSocketValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPTCPSocketComponent_ResizeSocketList_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPTCPSocketComponent_ResizeSocketList_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPTCPSocketComponent | Function" },
		{ "ModuleRelativePath", "Public/Components/LFPTCPSocketComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPTCPSocketComponent_ResizeSocketList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPTCPSocketComponent, nullptr, "ResizeSocketList", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPTCPSocketComponent_ResizeSocketList_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPTCPSocketComponent_ResizeSocketList_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ULFPTCPSocketComponent_ResizeSocketList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPTCPSocketComponent_ResizeSocketList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPTCPSocketComponent_SendData_Statics
	{
		struct LFPTCPSocketComponent_eventSendData_Parms
		{
			TArray<uint8> Data;
			int32 SocketID;
			int32 ClientID;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocketID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SocketID;
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULFPTCPSocketComponent_SendData_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPTCPSocketComponent_SendData_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFPTCPSocketComponent_SendData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPTCPSocketComponent_eventSendData_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPTCPSocketComponent_SendData_Statics::NewProp_Data_MetaData), Z_Construct_UFunction_ULFPTCPSocketComponent_SendData_Statics::NewProp_Data_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPTCPSocketComponent_SendData_Statics::NewProp_SocketID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPTCPSocketComponent_SendData_Statics::NewProp_SocketID = { "SocketID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPTCPSocketComponent_eventSendData_Parms, SocketID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPTCPSocketComponent_SendData_Statics::NewProp_SocketID_MetaData), Z_Construct_UFunction_ULFPTCPSocketComponent_SendData_Statics::NewProp_SocketID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPTCPSocketComponent_SendData_Statics::NewProp_ClientID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPTCPSocketComponent_SendData_Statics::NewProp_ClientID = { "ClientID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPTCPSocketComponent_eventSendData_Parms, ClientID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPTCPSocketComponent_SendData_Statics::NewProp_ClientID_MetaData), Z_Construct_UFunction_ULFPTCPSocketComponent_SendData_Statics::NewProp_ClientID_MetaData) };
	void Z_Construct_UFunction_ULFPTCPSocketComponent_SendData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPTCPSocketComponent_eventSendData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPTCPSocketComponent_SendData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPTCPSocketComponent_eventSendData_Parms), &Z_Construct_UFunction_ULFPTCPSocketComponent_SendData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPTCPSocketComponent_SendData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPTCPSocketComponent_SendData_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPTCPSocketComponent_SendData_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPTCPSocketComponent_SendData_Statics::NewProp_SocketID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPTCPSocketComponent_SendData_Statics::NewProp_ClientID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPTCPSocketComponent_SendData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPTCPSocketComponent_SendData_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPTCPSocketComponent | Function" },
		{ "CPP_Default_ClientID", "-1" },
		{ "ModuleRelativePath", "Public/Components/LFPTCPSocketComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPTCPSocketComponent_SendData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPTCPSocketComponent, nullptr, "SendData", nullptr, nullptr, Z_Construct_UFunction_ULFPTCPSocketComponent_SendData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPTCPSocketComponent_SendData_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPTCPSocketComponent_SendData_Statics::LFPTCPSocketComponent_eventSendData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPTCPSocketComponent_SendData_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPTCPSocketComponent_SendData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPTCPSocketComponent_SendData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPTCPSocketComponent_SendData_Statics::LFPTCPSocketComponent_eventSendData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPTCPSocketComponent_SendData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPTCPSocketComponent_SendData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULFPTCPSocketComponent);
	UClass* Z_Construct_UClass_ULFPTCPSocketComponent_NoRegister()
	{
		return ULFPTCPSocketComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULFPTCPSocketComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnConnected_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConnected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnReconnected_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReconnected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDisconnected_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDisconnected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDataReceived_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDataReceived;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULFPTCPSocketComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPTCPSocketComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ULFPTCPSocketComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULFPTCPSocketComponent_CreateSocket, "CreateSocket" }, // 3598473600
		{ &Z_Construct_UFunction_ULFPTCPSocketComponent_DestroySocket, "DestroySocket" }, // 1444853921
		{ &Z_Construct_UFunction_ULFPTCPSocketComponent_IsSocketValid, "IsSocketValid" }, // 3020187598
		{ &Z_Construct_UFunction_ULFPTCPSocketComponent_ResizeSocketList, "ResizeSocketList" }, // 4294127555
		{ &Z_Construct_UFunction_ULFPTCPSocketComponent_SendData, "SendData" }, // 3974156510
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPTCPSocketComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPTCPSocketComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTcpConnectionAccepted, const TArray<uint8>&, IPAddress);\n//DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTcpDataReceive, const TArray<uint8>&, Data);\n" },
#endif
		{ "IncludePath", "Components/LFPTCPSocketComponent.h" },
		{ "ModuleRelativePath", "Public/Components/LFPTCPSocketComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTcpConnectionAccepted, const TArray<uint8>&, IPAddress);\nDECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTcpDataReceive, const TArray<uint8>&, Data);" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPTCPSocketComponent_Statics::NewProp_OnConnected_MetaData[] = {
		{ "Category", "LFPTCPSocketComponent | Events" },
		{ "ModuleRelativePath", "Public/Components/LFPTCPSocketComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULFPTCPSocketComponent_Statics::NewProp_OnConnected = { "OnConnected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULFPTCPSocketComponent, OnConnected), Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPTCPSocketComponent_Statics::NewProp_OnConnected_MetaData), Z_Construct_UClass_ULFPTCPSocketComponent_Statics::NewProp_OnConnected_MetaData) }; // 255873031
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPTCPSocketComponent_Statics::NewProp_OnReconnected_MetaData[] = {
		{ "Category", "LFPTCPSocketComponent | Events" },
		{ "ModuleRelativePath", "Public/Components/LFPTCPSocketComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULFPTCPSocketComponent_Statics::NewProp_OnReconnected = { "OnReconnected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULFPTCPSocketComponent, OnReconnected), Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPTCPSocketComponent_Statics::NewProp_OnReconnected_MetaData), Z_Construct_UClass_ULFPTCPSocketComponent_Statics::NewProp_OnReconnected_MetaData) }; // 255873031
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPTCPSocketComponent_Statics::NewProp_OnDisconnected_MetaData[] = {
		{ "Category", "LFPTCPSocketComponent | Events" },
		{ "ModuleRelativePath", "Public/Components/LFPTCPSocketComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULFPTCPSocketComponent_Statics::NewProp_OnDisconnected = { "OnDisconnected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULFPTCPSocketComponent, OnDisconnected), Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketDisconnect__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPTCPSocketComponent_Statics::NewProp_OnDisconnected_MetaData), Z_Construct_UClass_ULFPTCPSocketComponent_Statics::NewProp_OnDisconnected_MetaData) }; // 4264341414
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPTCPSocketComponent_Statics::NewProp_OnDataReceived_MetaData[] = {
		{ "Category", "LFPTCPSocketComponent | Events" },
		{ "ModuleRelativePath", "Public/Components/LFPTCPSocketComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULFPTCPSocketComponent_Statics::NewProp_OnDataReceived = { "OnDataReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULFPTCPSocketComponent, OnDataReceived), Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPTCPSocketMessage__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPTCPSocketComponent_Statics::NewProp_OnDataReceived_MetaData), Z_Construct_UClass_ULFPTCPSocketComponent_Statics::NewProp_OnDataReceived_MetaData) }; // 2605657292
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULFPTCPSocketComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPTCPSocketComponent_Statics::NewProp_OnConnected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPTCPSocketComponent_Statics::NewProp_OnReconnected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPTCPSocketComponent_Statics::NewProp_OnDisconnected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPTCPSocketComponent_Statics::NewProp_OnDataReceived,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULFPTCPSocketComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULFPTCPSocketComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULFPTCPSocketComponent_Statics::ClassParams = {
		&ULFPTCPSocketComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULFPTCPSocketComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULFPTCPSocketComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPTCPSocketComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULFPTCPSocketComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPTCPSocketComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ULFPTCPSocketComponent()
	{
		if (!Z_Registration_Info_UClass_ULFPTCPSocketComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULFPTCPSocketComponent.OuterSingleton, Z_Construct_UClass_ULFPTCPSocketComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULFPTCPSocketComponent.OuterSingleton;
	}
	template<> LOHFUNCTIONPLUGIN_API UClass* StaticClass<ULFPTCPSocketComponent>()
	{
		return ULFPTCPSocketComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULFPTCPSocketComponent);
	ULFPTCPSocketComponent::~ULFPTCPSocketComponent() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPTCPSocketComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPTCPSocketComponent_h_Statics::EnumInfo[] = {
		{ ELFPTCPDIsconnectFlags_StaticEnum, TEXT("ELFPTCPDIsconnectFlags"), &Z_Registration_Info_UEnum_ELFPTCPDIsconnectFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1803815464U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPTCPSocketComponent_h_Statics::ScriptStructInfo[] = {
		{ FLFPTCPSocketSetting::StaticStruct, Z_Construct_UScriptStruct_FLFPTCPSocketSetting_Statics::NewStructOps, TEXT("LFPTCPSocketSetting"), &Z_Registration_Info_UScriptStruct_LFPTCPSocketSetting, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLFPTCPSocketSetting), 816566264U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPTCPSocketComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULFPTCPSocketComponent, ULFPTCPSocketComponent::StaticClass, TEXT("ULFPTCPSocketComponent"), &Z_Registration_Info_UClass_ULFPTCPSocketComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULFPTCPSocketComponent), 2066253063U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPTCPSocketComponent_h_2457515320(TEXT("/Script/LohFunctionPlugin"),
		Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPTCPSocketComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPTCPSocketComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPTCPSocketComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPTCPSocketComponent_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPTCPSocketComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPTCPSocketComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
