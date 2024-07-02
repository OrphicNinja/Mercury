// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZMaskMaterialState : uint8;
#ifdef STARBREEZE_SBZMaskMaterialData_generated_h
#error "SBZMaskMaterialData.generated.h already included, missing '#pragma once' in SBZMaskMaterialData.h"
#endif
#define STARBREEZE_SBZMaskMaterialData_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMaskMaterialData_h_11_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMaskMaterialData_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMaterialState);


#define PAYDAY3_Source_Starbreeze_Public_SBZMaskMaterialData_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMaterialState);


#define PAYDAY3_Source_Starbreeze_Public_SBZMaskMaterialData_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZMaskMaterialData(); \
	friend struct Z_Construct_UClass_USBZMaskMaterialData_Statics; \
public: \
	DECLARE_CLASS(USBZMaskMaterialData, USBZCosmeticsDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMaskMaterialData)


#define PAYDAY3_Source_Starbreeze_Public_SBZMaskMaterialData_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUSBZMaskMaterialData(); \
	friend struct Z_Construct_UClass_USBZMaskMaterialData_Statics; \
public: \
	DECLARE_CLASS(USBZMaskMaterialData, USBZCosmeticsDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMaskMaterialData)


#define PAYDAY3_Source_Starbreeze_Public_SBZMaskMaterialData_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZMaskMaterialData(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZMaskMaterialData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMaskMaterialData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMaskMaterialData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMaskMaterialData(USBZMaskMaterialData&&); \
	NO_API USBZMaskMaterialData(const USBZMaskMaterialData&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMaskMaterialData_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMaskMaterialData(USBZMaskMaterialData&&); \
	NO_API USBZMaskMaterialData(const USBZMaskMaterialData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMaskMaterialData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMaskMaterialData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZMaskMaterialData)


#define PAYDAY3_Source_Starbreeze_Public_SBZMaskMaterialData_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MaterialState() { return STRUCT_OFFSET(USBZMaskMaterialData, MaterialState); } \
	FORCEINLINE static uint32 __PPO__BaseNormalTexture() { return STRUCT_OFFSET(USBZMaskMaterialData, BaseNormalTexture); } \
	FORCEINLINE static uint32 __PPO__AgedNormalTexture() { return STRUCT_OFFSET(USBZMaskMaterialData, AgedNormalTexture); } \
	FORCEINLINE static uint32 __PPO__AgedAlbedoTexture() { return STRUCT_OFFSET(USBZMaskMaterialData, AgedAlbedoTexture); } \
	FORCEINLINE static uint32 __PPO__Metallic() { return STRUCT_OFFSET(USBZMaskMaterialData, Metallic); } \
	FORCEINLINE static uint32 __PPO__Roughness() { return STRUCT_OFFSET(USBZMaskMaterialData, Roughness); } \
	FORCEINLINE static uint32 __PPO__DetailTiling() { return STRUCT_OFFSET(USBZMaskMaterialData, DetailTiling); } \
	FORCEINLINE static uint32 __PPO__ShadingModel() { return STRUCT_OFFSET(USBZMaskMaterialData, ShadingModel); } \
	FORCEINLINE static uint32 __PPO__UseAlbedo() { return STRUCT_OFFSET(USBZMaskMaterialData, UseAlbedo); }


#define PAYDAY3_Source_Starbreeze_Public_SBZMaskMaterialData_h_9_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZMaskMaterialData_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMaskMaterialData_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMaskMaterialData_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMaskMaterialData_h_11_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMaskMaterialData_h_11_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMaskMaterialData_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMaskMaterialData_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMaskMaterialData_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMaskMaterialData_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMaskMaterialData_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMaskMaterialData_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMaskMaterialData_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZMaskMaterialData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMaskMaterialData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
