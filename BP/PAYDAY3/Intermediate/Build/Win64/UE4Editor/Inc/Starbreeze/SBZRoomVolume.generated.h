// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZRoomType : uint8;
#ifdef STARBREEZE_SBZRoomVolume_generated_h
#error "SBZRoomVolume.generated.h already included, missing '#pragma once' in SBZRoomVolume.h"
#endif
#define STARBREEZE_SBZRoomVolume_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZRoomVolume_h_18_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZRoomVolume_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetRoomName); \
	DECLARE_FUNCTION(execGetRoomType); \
	DECLARE_FUNCTION(execSetRoomName); \
	DECLARE_FUNCTION(execSetRoomType);


#define PAYDAY3_Source_Starbreeze_Public_SBZRoomVolume_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRoomName); \
	DECLARE_FUNCTION(execGetRoomType); \
	DECLARE_FUNCTION(execSetRoomName); \
	DECLARE_FUNCTION(execSetRoomType);


#define PAYDAY3_Source_Starbreeze_Public_SBZRoomVolume_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZRoomVolume(); \
	friend struct Z_Construct_UClass_ASBZRoomVolume_Statics; \
public: \
	DECLARE_CLASS(ASBZRoomVolume, ATriggerVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), STARBREEZE_API) \
	DECLARE_SERIALIZER(ASBZRoomVolume) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZRoomVolume*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZRoomVolume_h_18_INCLASS \
private: \
	static void StaticRegisterNativesASBZRoomVolume(); \
	friend struct Z_Construct_UClass_ASBZRoomVolume_Statics; \
public: \
	DECLARE_CLASS(ASBZRoomVolume, ATriggerVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), STARBREEZE_API) \
	DECLARE_SERIALIZER(ASBZRoomVolume) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZRoomVolume*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZRoomVolume_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STARBREEZE_API ASBZRoomVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZRoomVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STARBREEZE_API, ASBZRoomVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZRoomVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	STARBREEZE_API ASBZRoomVolume(ASBZRoomVolume&&); \
	STARBREEZE_API ASBZRoomVolume(const ASBZRoomVolume&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZRoomVolume_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	STARBREEZE_API ASBZRoomVolume(ASBZRoomVolume&&); \
	STARBREEZE_API ASBZRoomVolume(const ASBZRoomVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STARBREEZE_API, ASBZRoomVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZRoomVolume); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZRoomVolume)


#define PAYDAY3_Source_Starbreeze_Public_SBZRoomVolume_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CoverPoints() { return STRUCT_OFFSET(ASBZRoomVolume, CoverPoints); } \
	FORCEINLINE static uint32 __PPO__SearchableCovers() { return STRUCT_OFFSET(ASBZRoomVolume, SearchableCovers); } \
	FORCEINLINE static uint32 __PPO__ActorsInRoom() { return STRUCT_OFFSET(ASBZRoomVolume, ActorsInRoom); } \
	FORCEINLINE static uint32 __PPO__AIObjectivesInRoom() { return STRUCT_OFFSET(ASBZRoomVolume, AIObjectivesInRoom); }


#define PAYDAY3_Source_Starbreeze_Public_SBZRoomVolume_h_16_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZRoomVolume_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZRoomVolume_h_18_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZRoomVolume_h_18_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZRoomVolume_h_18_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZRoomVolume_h_18_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZRoomVolume_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZRoomVolume_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZRoomVolume_h_18_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZRoomVolume_h_18_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZRoomVolume_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZRoomVolume_h_18_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZRoomVolume_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZRoomVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZRoomVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
