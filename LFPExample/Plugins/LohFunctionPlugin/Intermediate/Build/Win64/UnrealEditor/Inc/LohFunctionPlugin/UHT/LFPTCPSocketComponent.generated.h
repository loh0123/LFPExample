// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/LFPTCPSocketComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ELFPTCPDIsconnectFlags : uint8;
struct FLFPTCPSocketSetting;
#ifdef LOHFUNCTIONPLUGIN_LFPTCPSocketComponent_generated_h
#error "LFPTCPSocketComponent.generated.h already included, missing '#pragma once' in LFPTCPSocketComponent.h"
#endif
#define LOHFUNCTIONPLUGIN_LFPTCPSocketComponent_generated_h

#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPTCPSocketComponent_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLFPTCPSocketSetting_Statics; \
	LOHFUNCTIONPLUGIN_API static class UScriptStruct* StaticStruct();


template<> LOHFUNCTIONPLUGIN_API UScriptStruct* StaticStruct<struct FLFPTCPSocketSetting>();

#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPTCPSocketComponent_h_69_DELEGATE \
LOHFUNCTIONPLUGIN_API void FLFPTCPSocketEvent_DelegateWrapper(const FMulticastScriptDelegate& LFPTCPSocketEvent, const int32 SocketID, const int32 ClientID);


#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPTCPSocketComponent_h_70_DELEGATE \
LOHFUNCTIONPLUGIN_API void FLFPTCPSocketDisconnect_DelegateWrapper(const FMulticastScriptDelegate& LFPTCPSocketDisconnect, const ELFPTCPDIsconnectFlags DIsconnectFlags, const FLFPTCPSocketSetting SocketSetting, const int32 SocketID, const int32 ClientID);


#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPTCPSocketComponent_h_71_DELEGATE \
LOHFUNCTIONPLUGIN_API void FLFPTCPSocketMessage_DelegateWrapper(const FMulticastScriptDelegate& LFPTCPSocketMessage, const int32 SocketID, const int32 ClientID, TArray<uint8> const& Bytes);


#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPTCPSocketComponent_h_79_SPARSE_DATA
#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPTCPSocketComponent_h_79_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPTCPSocketComponent_h_79_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPTCPSocketComponent_h_79_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendData); \
	DECLARE_FUNCTION(execDestroySocket); \
	DECLARE_FUNCTION(execCreateSocket); \
	DECLARE_FUNCTION(execResizeSocketList); \
	DECLARE_FUNCTION(execIsSocketValid);


#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPTCPSocketComponent_h_79_ACCESSORS
#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPTCPSocketComponent_h_79_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULFPTCPSocketComponent(); \
	friend struct Z_Construct_UClass_ULFPTCPSocketComponent_Statics; \
public: \
	DECLARE_CLASS(ULFPTCPSocketComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LohFunctionPlugin"), NO_API) \
	DECLARE_SERIALIZER(ULFPTCPSocketComponent)


#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPTCPSocketComponent_h_79_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULFPTCPSocketComponent(ULFPTCPSocketComponent&&); \
	NO_API ULFPTCPSocketComponent(const ULFPTCPSocketComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULFPTCPSocketComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULFPTCPSocketComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULFPTCPSocketComponent) \
	NO_API virtual ~ULFPTCPSocketComponent();


#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPTCPSocketComponent_h_76_PROLOG
#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPTCPSocketComponent_h_79_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPTCPSocketComponent_h_79_SPARSE_DATA \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPTCPSocketComponent_h_79_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPTCPSocketComponent_h_79_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPTCPSocketComponent_h_79_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPTCPSocketComponent_h_79_ACCESSORS \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPTCPSocketComponent_h_79_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPTCPSocketComponent_h_79_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOHFUNCTIONPLUGIN_API UClass* StaticClass<class ULFPTCPSocketComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPTCPSocketComponent_h


#define FOREACH_ENUM_ELFPTCPDISCONNECTFLAGS(op) \
	op(ELFPTCPDIsconnectFlags::LFP_User) \
	op(ELFPTCPDIsconnectFlags::LFP_NoConnection) \
	op(ELFPTCPDIsconnectFlags::LFP_LoseConnection) 

enum class ELFPTCPDIsconnectFlags : uint8;
template<> struct TIsUEnumClass<ELFPTCPDIsconnectFlags> { enum { Value = true }; };
template<> LOHFUNCTIONPLUGIN_API UEnum* StaticEnum<ELFPTCPDIsconnectFlags>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
