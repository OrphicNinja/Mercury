// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
#ifdef STARBREEZE_SBZAttractableBagItem_generated_h
#error "SBZAttractableBagItem.generated.h already included, missing '#pragma once' in SBZAttractableBagItem.h"
#endif
#define STARBREEZE_SBZAttractableBagItem_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAttractableBagItem_h_16_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZAttractableBagItem_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetAttractorInstigator); \
	DECLARE_FUNCTION(execSetEnabled);


#define PAYDAY3_Source_Starbreeze_Public_SBZAttractableBagItem_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetAttractorInstigator); \
	DECLARE_FUNCTION(execSetEnabled);


#define PAYDAY3_Source_Starbreeze_Public_SBZAttractableBagItem_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZAttractableBagItem(); \
	friend struct Z_Construct_UClass_ASBZAttractableBagItem_Statics; \
public: \
	DECLARE_CLASS(ASBZAttractableBagItem, ASBZBagItem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZAttractableBagItem) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZAttractableBagItem*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAttractableBagItem_h_16_INCLASS \
private: \
	static void StaticRegisterNativesASBZAttractableBagItem(); \
	friend struct Z_Construct_UClass_ASBZAttractableBagItem_Statics; \
public: \
	DECLARE_CLASS(ASBZAttractableBagItem, ASBZBagItem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZAttractableBagItem) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZAttractableBagItem*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAttractableBagItem_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZAttractableBagItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZAttractableBagItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZAttractableBagItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZAttractableBagItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZAttractableBagItem(ASBZAttractableBagItem&&); \
	NO_API ASBZAttractableBagItem(const ASBZAttractableBagItem&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZAttractableBagItem_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZAttractableBagItem(ASBZAttractableBagItem&&); \
	NO_API ASBZAttractableBagItem(const ASBZAttractableBagItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZAttractableBagItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZAttractableBagItem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZAttractableBagItem)


#define PAYDAY3_Source_Starbreeze_Public_SBZAttractableBagItem_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AttractorComponent() { return STRUCT_OFFSET(ASBZAttractableBagItem, AttractorComponent); } \
	FORCEINLINE static uint32 __PPO__RoomVolumes() { return STRUCT_OFFSET(ASBZAttractableBagItem, RoomVolumes); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAttractableBagItem_h_14_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZAttractableBagItem_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAttractableBagItem_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAttractableBagItem_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAttractableBagItem_h_16_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAttractableBagItem_h_16_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZAttractableBagItem_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZAttractableBagItem_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAttractableBagItem_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAttractableBagItem_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAttractableBagItem_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAttractableBagItem_h_16_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAttractableBagItem_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZAttractableBagItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAttractableBagItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
