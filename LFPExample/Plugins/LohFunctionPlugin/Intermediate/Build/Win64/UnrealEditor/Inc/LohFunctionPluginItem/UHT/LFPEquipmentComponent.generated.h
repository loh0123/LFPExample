// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Item/LFPEquipmentComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULFPInventoryComponent;
struct FLFPEquipmentSlotData;
struct FLFPInventoryItemData;
#ifdef LOHFUNCTIONPLUGINITEM_LFPEquipmentComponent_generated_h
#error "LFPEquipmentComponent.generated.h already included, missing '#pragma once' in LFPEquipmentComponent.h"
#endif
#define LOHFUNCTIONPLUGINITEM_LFPEquipmentComponent_generated_h

#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPEquipmentComponent_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLFPEquipmentSlotConfig_Statics; \
	LOHFUNCTIONPLUGINITEM_API static class UScriptStruct* StaticStruct();


template<> LOHFUNCTIONPLUGINITEM_API UScriptStruct* StaticStruct<struct FLFPEquipmentSlotConfig>();

#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPEquipmentComponent_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLFPEquipmentSlotData_Statics; \
	LOHFUNCTIONPLUGINITEM_API static class UScriptStruct* StaticStruct();


template<> LOHFUNCTIONPLUGINITEM_API UScriptStruct* StaticStruct<struct FLFPEquipmentSlotData>();

#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPEquipmentComponent_h_72_DELEGATE \
LOHFUNCTIONPLUGINITEM_API void FOnEquipmentEvent_DelegateWrapper(const FMulticastScriptDelegate& OnEquipmentEvent, FLFPInventoryItemData const& ItemData, const int32 EquipmentSlotIndex, const int32 InventorySlotIndex, const FString& EventInfo);


#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPEquipmentComponent_h_74_DELEGATE \
LOHFUNCTIONPLUGINITEM_API void FOnEquipmentChangeEvent_DelegateWrapper(const FMulticastScriptDelegate& OnEquipmentChangeEvent, FLFPInventoryItemData const& ItemData, const int32 EquipmentSlotIndex, const int32 InventorySlotIndex, bool Value, const FString& EventInfo);


#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPEquipmentComponent_h_80_SPARSE_DATA
#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPEquipmentComponent_h_80_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPEquipmentComponent_h_80_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPEquipmentComponent_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnEquipmentSlotListRep); \
	DECLARE_FUNCTION(execOnInventoryComponentRep); \
	DECLARE_FUNCTION(execFindEquipmentSlotIndex); \
	DECLARE_FUNCTION(execGetEquipmentSlot); \
	DECLARE_FUNCTION(execGetEquipmentSlotList); \
	DECLARE_FUNCTION(execIsEquipmentSlotLock); \
	DECLARE_FUNCTION(execIsEquipmentSlotActive); \
	DECLARE_FUNCTION(execIsEquipmentSlotItemValid); \
	DECLARE_FUNCTION(execIsEquipmentSlotIndexValid); \
	DECLARE_FUNCTION(execCanUnequipItem); \
	DECLARE_FUNCTION(execCanEquipItem); \
	DECLARE_FUNCTION(execOnInventoryUpdateItem); \
	DECLARE_FUNCTION(execSetEquipmentSlotLock); \
	DECLARE_FUNCTION(execSetEquipmentSlotActive); \
	DECLARE_FUNCTION(execTryUnequipItem); \
	DECLARE_FUNCTION(execTryEquipItem); \
	DECLARE_FUNCTION(execClearEquipmentSlot); \
	DECLARE_FUNCTION(execRemoveEquipmentSlot); \
	DECLARE_FUNCTION(execAddEquipmentSlot); \
	DECLARE_FUNCTION(execAddEquipmentSlotName); \
	DECLARE_FUNCTION(execSetInventoryComponent);


#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPEquipmentComponent_h_80_ACCESSORS
#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPEquipmentComponent_h_80_CALLBACK_WRAPPERS
#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPEquipmentComponent_h_80_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ULFPEquipmentComponent, NO_API)


#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPEquipmentComponent_h_80_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULFPEquipmentComponent(); \
	friend struct Z_Construct_UClass_ULFPEquipmentComponent_Statics; \
public: \
	DECLARE_CLASS(ULFPEquipmentComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LohFunctionPluginItem"), NO_API) \
	DECLARE_SERIALIZER(ULFPEquipmentComponent) \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPEquipmentComponent_h_80_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<ULFPEquipmentComponent*>(this); } \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		EquipmentSlotList=NETFIELD_REP_START, \
		InventoryComponent, \
		NETFIELD_REP_END=InventoryComponent	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPEquipmentComponent_h_80_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULFPEquipmentComponent(ULFPEquipmentComponent&&); \
	NO_API ULFPEquipmentComponent(const ULFPEquipmentComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULFPEquipmentComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULFPEquipmentComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULFPEquipmentComponent) \
	NO_API virtual ~ULFPEquipmentComponent();


#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPEquipmentComponent_h_77_PROLOG
#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPEquipmentComponent_h_80_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPEquipmentComponent_h_80_SPARSE_DATA \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPEquipmentComponent_h_80_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPEquipmentComponent_h_80_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPEquipmentComponent_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPEquipmentComponent_h_80_ACCESSORS \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPEquipmentComponent_h_80_CALLBACK_WRAPPERS \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPEquipmentComponent_h_80_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPEquipmentComponent_h_80_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOHFUNCTIONPLUGINITEM_API UClass* StaticClass<class ULFPEquipmentComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPEquipmentComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
