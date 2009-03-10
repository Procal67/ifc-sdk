/*
//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2008 CSTB                                             *
 *                                                                         *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Mod-Eve, CSTB                                                   *
 *         290, route des Lucioles                                         *
 *         BP 209                                                          *
 *         06904 Sophia Antipolis, France                                  *
 *                                                                         *
 ***************************************************************************
*/

#ifndef IFC2X3_IFCOBJECTDEFINITION_H
#define IFC2X3_IFCOBJECTDEFINITION_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include "ifc2x3/IfcRoot.h"
#include <string>
#include <Step/SPFData.h>

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcObjectDefinition : public IfcRoot {
    public:
        /**
         * Accepts a read/write Step::BaseVisitor.
         * 
         * @param visitor the read/write Step::BaseVisitor to accept
         */
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);
        /**
         * Returns the class type as a human readable std::string.
         * 
         */
        virtual const std::string &type() const;
        /**
         * Returns the Step::ClassType of this specific class. Useful to compare with the isOfType method for example.
         * 
         */
        static const Step::ClassType &getClassType();
        /**
         * Returns the Step::ClassType of the instance of this class. (might be a subtype since it is virtual and overloaded).
         * 
         */
        virtual const Step::ClassType &getType() const;
        /**
         * Compares this instance's Step::ClassType with the one passed as parameter. Checks the type recursively (to the mother classes).
         * 
         * @param t
         */
        virtual bool isOfType(const Step::ClassType &t) const;
        /**
         * Gets the value of the inverse attribute 'HasAssignments'.
         * 
         */
        Inverse_Set_IfcRelAssigns_0_n &getHasAssignments();
        /**
         * (const) Returns the value of the explicit attribute 'HasAssignments'.
         * 
         * @return the value of the explicit attribute 'HasAssignments'
         */
        virtual const Inverse_Set_IfcRelAssigns_0_n &getHasAssignments() const;
        /**
         * Gets the value of the inverse attribute 'IsDecomposedBy'.
         * 
         */
        Inverse_Set_IfcRelDecomposes_0_n &getIsDecomposedBy();
        /**
         * (const) Returns the value of the explicit attribute 'IsDecomposedBy'.
         * 
         * @return the value of the explicit attribute 'IsDecomposedBy'
         */
        virtual const Inverse_Set_IfcRelDecomposes_0_n &getIsDecomposedBy() const;
        /**
         * Gets the value of the inverse attribute 'Decomposes'.
         * 
         */
        Inverse_Set_IfcRelDecomposes_0_1 &getDecomposes();
        /**
         * (const) Returns the value of the explicit attribute 'Decomposes'.
         * 
         * @return the value of the explicit attribute 'Decomposes'
         */
        virtual const Inverse_Set_IfcRelDecomposes_0_1 &getDecomposes() const;
        /**
         * Gets the value of the inverse attribute 'HasAssociations'.
         * 
         */
        Inverse_Set_IfcRelAssociates_0_n &getHasAssociations();
        /**
         * (const) Returns the value of the explicit attribute 'HasAssociations'.
         * 
         * @return the value of the explicit attribute 'HasAssociations'
         */
        virtual const Inverse_Set_IfcRelAssociates_0_n &getHasAssociations() const;
        friend class IfcRelDecomposes;
        friend class IfcRelAssociates;
        friend class Inverted_IfcRelAssociates_RelatedObjects_type;
        friend class Inverted_IfcRelAssigns_RelatedObjects_type;
        friend class ExpressDataSet;
        friend class IfcRelAssigns;
        friend class Inverted_IfcRelDecomposes_RelatedObjects_type;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcObjectDefinition(Step::Id id, Step::SPFData *args);
        virtual ~IfcObjectDefinition();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcObjectDefinition &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Inverse_Set_IfcRelAssigns_0_n m_hasAssignments;
        /**
         */
        Inverse_Set_IfcRelDecomposes_0_n m_isDecomposedBy;
        /**
         */
        Inverse_Set_IfcRelDecomposes_0_1 m_decomposes;
        /**
         */
        Inverse_Set_IfcRelAssociates_0_n m_hasAssociations;

    };

}

#endif // IFC2X3_IFCOBJECTDEFINITION_H
