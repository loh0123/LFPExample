// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Item/LFPInventoryInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLFPInventoryItemData;
#ifdef LOHFUNCTIONPLUGINITEM_LFPInventoryInterface_generated_h
#error "LFPInventoryInterface.generated.h already included, missing '#pragma once' in LFPInventoryInterface.h"
#endif
#define LOHFUNCTIONPLUGINITEM_LFPInventoryInterface_generated_h

#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPInventoryInterface_h_17_SPARSE_DATA
#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPInventoryInterface_h_17_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPInventoryInterface_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPInventoryInterface_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCanInventorySwapItem); \
	DECLARE_FUNCTION(execCanInventoryRemoveItem); \
	DECLARE_FUNCTION(execCanInventoryAddItem);


#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPInventoryInterface_h_17_ACCESSORS
#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPInventoryInterface_h_17_CALLBACK_WRAPPERS
#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPInventoryInterface_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LOHFUNCTIONPLUGINITEM_API ULFPInventoryInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LOHFUNCTIONPLUGINITEM_API ULFPInventoryInterface(ULFPInventoryInterface&&); \
	LOHFUNCTIONPLUGINITEM_API ULFPInventoryInterface(const ULFPInventoryInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LOHFUNCTIONPLUGINITEM_API, ULFPInventoryInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULFPInventoryInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULFPInventoryInterface) \
	LOHFUNCTIONPLUGINITEM_API virtual ~ULFPInventoryInterface();


#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPInventoryInterface_h_17_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesULFPInventoryInterface(); \
	friend struct Z_Construct_UClass_ULFPInventoryInterface_Statics; \
public: \
	DECLARE_CLASS(ULFPInventoryInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/LohFunctionPluginItem"), LOHFUNCTIONPLUGINITEM_API) \
	DECLARE_SERIALIZER(ULFPInventoryInterface)


#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPInventoryInterface_h_17_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPInventoryInterface_h_17_GENERATED_UINTERFACE_BODY() \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPInventoryInterface_h_17_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPInventoryInterface_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ILFPInventoryInterface() {} \
public: \
	typedef ULFPInventoryInterface UClassType; \
	typedef ILFPInventoryInterface ThisClass; \
	static bool Execute_CanInventoryAddItem(const UObject* O, FLFPInventoryItemData const& ItemData, const int32 SlotIndex, const FString& EventInfo); \
	static bool Execute_CanInventoryRemoveItem(const UObject* O, FLFPInventoryItemData const& ItemData, const int32 SlotIndex, const FString& EventInfo); \
	static bool Execute_CanInventorySwapItem(const UObject* O, FLFPInventoryItemData const& FromItemData, const int32 FromSlot, FLFPInventoryItemData const& ToItemData, const int32 ToSlot, const FString& EventInfo); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPInventoryInterface_h_14_PROLOG
#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPInventoryInterface_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPInventoryInterface_h_17_SPARSE_DATA \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPInventoryInterface_h_17_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPInventoryInterface_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPInventoryInterface_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPInventoryInterface_h_17_ACCESSORS \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPInventoryInterface_h_17_CALLBACK_WRAPPERS \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPInventoryInterface_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOHFUNCTIONPLUGINITEM_API UClass* StaticClass<class ULFPInventoryInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPInventoryInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
