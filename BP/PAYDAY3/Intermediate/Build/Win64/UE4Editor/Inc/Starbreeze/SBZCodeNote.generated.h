// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZCodeNote_generated_h
#error "SBZCodeNote.generated.h already included, missing '#pragma once' in SBZCodeNote.h"
#endif
#define STARBREEZE_SBZCodeNote_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZCodeNote_h_11_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZCodeNote_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_CodeToShow);


#define PAYDAY3_Source_Starbreeze_Public_SBZCodeNote_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_CodeToShow);


#define PAYDAY3_Source_Starbreeze_Public_SBZCodeNote_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZCodeNote(); \
	friend struct Z_Construct_UClass_ASBZCodeNote_Statics; \
public: \
	DECLARE_CLASS(ASBZCodeNote, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZCodeNote) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZCodeNote*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CodeToShow=NETFIELD_REP_START, \
		NETFIELD_REP_END=CodeToShow	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZCodeNote_h_11_INCLASS \
private: \
	static void StaticRegisterNativesASBZCodeNote(); \
	friend struct Z_Construct_UClass_ASBZCodeNote_Statics; \
public: \
	DECLARE_CLASS(ASBZCodeNote, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZCodeNote) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZCodeNote*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CodeToShow=NETFIELD_REP_START, \
		NETFIELD_REP_END=CodeToShow	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZCodeNote_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZCodeNote(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZCodeNote) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZCodeNote); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZCodeNote); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZCodeNote(ASBZCodeNote&&); \
	NO_API ASBZCodeNote(const ASBZCodeNote&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZCodeNote_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZCodeNote(ASBZCodeNote&&); \
	NO_API ASBZCodeNote(const ASBZCodeNote&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZCodeNote); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZCodeNote); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZCodeNote)


#define PAYDAY3_Source_Starbreeze_Public_SBZCodeNote_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CodeToShow() { return STRUCT_OFFSET(ASBZCodeNote, CodeToShow); } \
	FORCEINLINE static uint32 __PPO__CodeWidget() { return STRUCT_OFFSET(ASBZCodeNote, CodeWidget); } \
	FORCEINLINE static uint32 __PPO__bForceShowTrueCode() { return STRUCT_OFFSET(ASBZCodeNote, bForceShowTrueCode); }


#define PAYDAY3_Source_Starbreeze_Public_SBZCodeNote_h_9_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZCodeNote_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCodeNote_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZCodeNote_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCodeNote_h_11_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZCodeNote_h_11_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZCodeNote_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZCodeNote_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCodeNote_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZCodeNote_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCodeNote_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCodeNote_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCodeNote_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZCodeNote>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZCodeNote_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
